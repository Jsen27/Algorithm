#include <iostream>
#include <queue>

using namespace std;

int n, k;
int dist[100001];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	cin >> n >> k;

	fill(dist, dist + 100001, 100001);

	queue<int> q;
	q.push(n);
	dist[n] = 0;
	while (!q.empty()){
		auto cur = q.front(); q.pop();

		if (cur == k){
			cout << dist[cur] << '\n';
			break;
		}

		if (cur * 2 < 100001 && dist[cur * 2] > dist[cur]){
			dist[cur * 2] = dist[cur];
			q.push(cur * 2);
		}

		if (cur + 1 < 100001 && dist[cur + 1] > dist[cur]){
			dist[cur + 1] = dist[cur] + 1;
			q.push(cur + 1);
		}

		if (cur - 1 >= 0 && dist[cur - 1] > dist[cur]){
			dist[cur - 1] = dist[cur] + 1;
			q.push(cur - 1);
		}
	}

	return 0;
}
