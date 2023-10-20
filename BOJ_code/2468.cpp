#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int map[101][101];
bool vis[101][101];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int ans, maxlimit;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int N;
    cin >> N;
    maxlimit = 0; // maxlimit 초기화
    for (int i = 0; i < N; i++)
        for(int j = 0; j < N; j++){
            cin >> map[i][j];
            maxlimit = max(maxlimit, map[i][j]);
        }

    ans = 1; // 최소값은 1로 초기화
    for(int r = 0; r <= maxlimit; r++){
        for(int i = 0; i < N; i++)
            fill(vis[i], vis[i] + N, false);
        int cnt = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if (!vis[i][j] && map[i][j] > r){
                    cnt++;
                    queue<pair<int, int> > q;
                    vis[i][j] = true;
                    q.push({i, j});
                    while (!q.empty()){
                        auto cur = q.front();
                        q.pop();
                        for(int dir = 0; dir < 4; dir++){
                            int nx = cur.first + dx[dir];
                            int ny = cur.second + dy[dir];
                            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                            if (vis[nx][ny] || map[nx][ny] <= r) continue;
                            q.push({nx, ny});
                            vis[nx][ny] = true;
                        }
                    }
                }
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans;
}
