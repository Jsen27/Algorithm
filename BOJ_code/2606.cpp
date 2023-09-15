#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> >v;
vector<int> visited;
int cnt = -1;

void dfs(int cur)
{
    if (visited[cur])
        return;
    visited[cur] = 1;
    cnt++;

    for(int next : v[cur])
        dfs(next);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M;

    cin >> N >> M;

    v.resize(N + 1);
    visited.resize(N + 1);

    for (int i = 0; i < M; i++){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        v[tmp1].push_back(tmp2);
        v[tmp2].push_back(tmp1);
    }

    /* 굳이 sort를 하지 않아도 되는 문제*/
    // for(int i = 1; i <= N; i++)
    //     sort(v[i].begin(), v[i].end());

    dfs(1);
    cout << cnt;

    return 0;
}