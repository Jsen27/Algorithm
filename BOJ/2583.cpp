#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int vis[101][101];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int map[101][101];
vector<int> ans;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int m, n, k;
    cin >> m >> n >> k;
    // 0 = 이동가능, 1 = 벽
    for(int i = 0; i < m; i++)
        fill(vis[i], vis[i] + n, -1);
    while (k--){
        int x, xx, y, yy;
        cin >> x >> y >> xx >> yy;
        for(int i = y; i < yy; i++){
            for(int j = x; j < xx; j++)
                map[i][j] = 1;
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < n; j++){
            if (vis[i][j] == -1 && map[i][j] == 0){
                vis[i][j] = 1;
                queue<pair<int, int> > q;
                q.push({i, j});
                int area = 1;
                while(!q.empty()){
                    auto cur = q.front();
                    q.pop();
                    for(int dir = 0; dir < 4; dir++){
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                        if (vis[nx][ny] != -1 || map[nx][ny] != 0) continue;
                        vis[nx][ny] = 1;
                        q.push({nx, ny});
                        area++;
                    }
                }
                ans.push_back(area);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(auto num : ans)
        cout << num << ' ';
}
