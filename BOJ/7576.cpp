#include <iostream>
#include <queue>
using namespace std;

int dist[1001][1001];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int map[1001][1001];

int main()
{
	int N, M;
	queue<pair<int, int> > q;

	cin >> M >> N;

	for (int i = 0; i < N; i++)
		for(int j = 0; j < M; j++){
			cin >> map[i][j];
			if (map[i][j] == 1)
				q.push({i, j});
			if (map[i][j] == 0)
				dist[i][j] = -1;
		}
	

	while (!q.empty()){
		pair<int, int> cur = q.front();
		q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
				continue;
			if (dist[nx][ny] >= 0)
				continue;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			q.push({nx, ny});
		}
	}

	int maxi = 0;

	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++){
			if (dist[i][j] == -1){
				cout << -1;
				return 0;
			}
			maxi = max(maxi, dist[i][j]);
		}
	cout << maxi;

	return 0;
}