#include <iostream>
#include <queue>
using namespace std;

int visit[501][501];
int nx[4] = {0, 1, 0, -1};
int ny[4] = {1, 0, -1, 0};
int map[501][501];

int main()
{
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> map[i][j];

	int maxi = 0;
	int cnt = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++){
			if (visit[i][j] || map[i][j] == 0)
				continue;
			queue<pair<int, int> >q;
			q.push({i, j});
			visit[i][j] = 1;
			cnt++;
			int area = 0;
			while(!q.empty()){
				area++;
				pair<int, int> cur = q.front();
				q.pop();
				for(int dir = 0; dir < 4; dir++){
					int dx = cur.first + nx[dir];
					int dy = cur.second + ny[dir];
					if (dx < 0 || dx >= n || dy < 0 || dy >= m)
						continue;
					if (visit[dx][dy] || map[dx][dy] == 0)
						continue;
					visit[dx][dy] = 1;
					q.push({dx, dy});
				}
			}
			maxi = max(maxi, area);
		}
	
	cout << cnt << '\n' << maxi;

	return 0;
}