#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int dist[1000001];
int map[1000001];
vector<int> ans;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    fill(dist, dist + 1000001, -1);
    // F = 총 층수, S = 현재 층, G = 도착 층, U = 위, D = 아래
    int F, S, G, U, D;
    cin >> F >> S >> G >> U >> D;
    queue<int> q;
    q.push(S);
    dist[S] = 0;
    while (!q.empty()){
        if (dist[G] != -1)
            break;
        int cur = q.front();
        q.pop();
        if (cur + U <= F && dist[cur + U] == -1){
            dist[cur + U] = dist[cur] + 1;
            q.push(cur + U);
        }
        if (cur - D > 0 && dist[cur - D] == -1){
            dist[cur - D] = dist[cur] + 1;
            q.push(cur - D);
        }
    }
    if (dist[G] != -1)
        cout << dist[G];
    else
        cout << "use the stairs";
}
