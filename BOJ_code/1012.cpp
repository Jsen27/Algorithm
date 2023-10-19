#include <iostream>
#include <queue>
using namespace std;

int vis[2501][2501];
int map[2501][2501];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	for (int tc = 0; tc < T; tc++){
		int n, m, k;
		int ans = 0;
		cin >> m >> n >> k;
		for(int i = 0; i < n; i++){
			fill(map[i], map[i] + m, 0);
			fill(vis[i], vis[i] + m, 0);
		}
		for(int i = 0; i < k; i++){
			int x, y;
			cin >> x >> y;
			map[y][x] = 1;
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if (map[i][j] && !vis[i][j]){
					vis[i][j] = 1;
					queue<pair<int, int> > q;
					q.push({i, j});
					ans++;
					while(!q.empty()){
						pair<int, int> cur = q.front();
						q.pop();
						for(int dir = 0; dir < 4; dir++){
							int nx = cur.first + dx[dir];
							int ny = cur.second + dy[dir];
							if (nx < 0 || nx >= n || ny < 0 || ny >= m)
								continue;
							if (vis[nx][ny] || !map[nx][ny])
								continue;
							vis[nx][ny] = 1;
							q.push({nx, ny});
						}
					}
				}
			}
		}
		cout << ans << '\n';
	}
}