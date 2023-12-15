#include <iostream>
#include <queue>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int map[1001][1001][2];
int N, M;

int BFS()
{
	queue<pair<pair<int, int>, int> > q;
	q.push({{0, 0}, 0});
	while (!q.empty()){
		int x = q.front().first.first;
		int y = q.front().first.second;
		int broken = q.front().second;
		q.pop();
		if (x == N - 1 && y == M - 1)
			return map[x][y][broken] + 1;
		for(int i = 0; i < 4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (map[nx][ny][0] == 1){
				if (!broken){
					map[nx][ny][1] = map[x][y][broken] + 1;
					q.push({{nx, ny}, 1});
				}
			} else if (map[nx][ny][0] == 0){
				if (broken && map[nx][ny][broken]) continue;
				map[nx][ny][broken] = map[x][y][broken] + 1;
				q.push({{nx, ny}, broken});
			}
		}
	}
	return -1;
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	cin >> N >> M;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++){
			char input;
			cin >> input;
			map[i][j][0] = input - '0';
		}
	cout << BFS();
}
