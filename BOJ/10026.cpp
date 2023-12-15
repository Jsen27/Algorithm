#include <iostream>
#include <queue>
using namespace std;

bool vis[2501][2501];
char map[2501][2501];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
			cin >> map[i];

	int case1 = 0;
	// R G B 순서
	// 적록색약 아닌 사람 먼저
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if (!vis[i][j]){
				char type = map[i][j];
				vis[i][j] = true;
				queue<pair<int, int> > q;
				q.push({i, j});
				case1++;
				while (!q.empty()){
					auto cur = q.front();
					q.pop();
					for(int dir = 0; dir < 4; dir++){
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];
						if (nx < 0 || nx >= N || ny < 0 || ny >= N)
							continue;
						if (vis[nx][ny] || map[nx][ny] != type)
							continue;
						vis[nx][ny] = 1;
						q.push({nx, ny});
					}
				}
			}
		}
	}

	for(int i = 0; i < N; i++)
		fill(vis[i], vis[i] + N, false);
	int case2 = 0;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if (!vis[i][j]){
				char type = map[i][j];
				vis[i][j] = true;
				queue<pair<int, int> > q;
				q.push({i, j});
				case2++;
				while (!q.empty()){
					auto cur = q.front();
					q.pop();
					for(int dir = 0; dir < 4; dir++){
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];
						if (nx < 0 || nx >= N || ny < 0 || ny >= N)
							continue;
						if (!vis[nx][ny]){
							if (type != 'B'){
								if (map[nx][ny] == 'B')
									continue;

							} else{
								if (map[nx][ny] != 'B')
									continue;
							}		
						} else
							continue;
						vis[nx][ny] = 1;
						q.push({nx, ny});
					}
				}
			}
		}
	}
	cout << case1 << ' ' << case2;
}