#include <iostream>
#include <queue>
using namespace std;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int dist[301][301];
int map[301][301];

int main(void) {
  	ios_base::sync_with_stdio(0);
	cin.tie(0);
  
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		queue<pair<int, int> > q;
		for(int i = 0; i < n; i++)
			fill(dist[i], dist[i] + n, -1);
		int x, y;
		cin >> x >> y;
		dist[x][y] = 0;
		q.push({x, y});
		cin >> x >> y;
		while(!q.empty()){
			auto cur = q.front();
			q.pop();
			for(int i = 0; i < 8; i++){
				int nx = cur.first + dx[i];
				int ny = cur.second + dy[i];
				if (nx < 0 || nx >= n || ny < 0 || ny >= n)
					continue;
				if (dist[nx][ny] != -1)
					continue;
				dist[nx][ny] = dist[cur.first][cur.second] + 1;
				q.push({nx, ny});
			}
		}
		cout << dist[x][y] << '\n';
	}
}