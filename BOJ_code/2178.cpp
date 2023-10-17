#include <iostream>
#include <queue>
using namespace std;

int dist[501][501];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
string map[101];

int main()
{
	int N, M;

	cin >> N >> M;

	for(int i = 0; i < N; i++)
		cin >> map[i];
	
	for(int i = 0; i < N; i++)
		fill(dist[i], dist[i] + M, -1);
	
	queue<pair<int, int> > q;
	dist[0][0] = 0;
	q.push({0, 0});
	while (!q.empty()){
		pair<int, int> cur = q.front();
		q.pop();
		for(int i = 0; i < 4; i++){
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
				continue;
			if (dist[nx][ny] != -1 || map[nx][ny] == '0')
				continue;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			q.push({nx, ny});
		}
	}

	cout << dist[N - 1][M - 1] + 1;
	

	return 0;
}