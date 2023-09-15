#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > map;
vector<vector<int> > visited;
vector<int> cntVec;

int N, cnt;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x)
{
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny >= N || ny < 0 || nx >= N || nx < 0)
            continue;
        if (visited[ny][nx] == 0 && map[ny][nx] == 1){
            visited[ny][nx] = 1;
            cnt++;
            dfs(ny, nx);
        }        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int res = 0;

    cin >> N;

    map.resize(N + 1, vector<int>(N + 1, 0));
    visited.resize(N+1, vector<int>(N + 1, 0));

    for(int i = 0; i < N; i++){
        string input;
        cin >> input;
        for(int j = 0; j < N; j++){
            if(input[j] == '1')
                map[i][j] = 1;
            else
                map[i][j] = 0;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (map[i][j] == 1 && visited[i][j] == 0){
                visited[i][j] = 1;
                cnt = 1;
                dfs(i,j);
                cntVec.push_back(cnt);
                res++;
            }
        }
    }

    cout << res << '\n';
    sort(cntVec.begin(), cntVec.end());
    
    for(int num : cntVec)
        cout << num << '\n';



    return 0;
}