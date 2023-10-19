#include <iostream>
#include <queue>
using namespace std;

int fdist[1001][1001];
int sdist[1001][1001];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
char map[1001][1001];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> m >> n;
        bool escape = false;
        queue<pair<int, int>> Qf = {}, Qs = {};
        for (int i = 0; i < n; i++) {
            cin >> map[i];
            fill(fdist[i], fdist[i] + m, -1);
            fill(sdist[i], sdist[i] + m, -1);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (map[i][j] == '#') {
                    fdist[i][j] = -1;
                    sdist[i][j] = -1;
                }
                else {
                    if (map[i][j] == '*') {
                        Qf.push({i, j});
                        fdist[i][j] = 0;
                    }
                    else if (map[i][j] == '@') {
                        Qs.push({i, j});
                        sdist[i][j] = 0;
                    }
                }
            }
        }

        while (!Qf.empty()) {
            auto v = Qf.front();
            Qf.pop();
            for (int k = 0; k < 4; k++) {
                int nx = v.first + dx[k];
                int ny = v.second + dy[k];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if (map[nx][ny] == '#' || fdist[nx][ny] != -1) continue;
                fdist[nx][ny] = fdist[v.first][v.second] + 1;
                Qf.push({nx, ny});
            }
        }

        while (!Qs.empty() && !escape) {
            auto v = Qs.front();
            Qs.pop();
            for (int k = 0; k < 4; k++) {
                int nx = v.first + dx[k];
                int ny = v.second + dy[k];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
                    cout << sdist[v.first][v.second] + 1 << '\n';
                    escape = true;
                    break;
                }
                if (map[nx][ny] == '#' || sdist[nx][ny] != -1 || (fdist[nx][ny] != -1 && fdist[nx][ny] <= sdist[v.first][v.second] + 1)) continue;
                sdist[nx][ny] = sdist[v.first][v.second] + 1;
                Qs.push({nx, ny});
            }
        }

        if (!escape) cout << "IMPOSSIBLE" << '\n';
    }
}
