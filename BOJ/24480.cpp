#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> >v;
vector<int> visited;
int cnt = 1;

void dfs(int R)
{
    if (visited[R] != 0)
        return;
    visited[R] = cnt++;

    for(int next : v[R])
        dfs(next);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);

    int N , M , R;

    cin >> N >> M >> R;

    v.resize(N + 1);
    visited.resize(N + 1);

    for(int i = 0; i < M; i++){
        int input1, input2;
        cin >> input1 >> input2;
        v[input1].push_back(input2);
        v[input2].push_back(input1);
    }

    for(int i = 1; i <= N; i++)
        sort(v[i].rbegin(), v[i].rend());

    dfs(R);

    for(int i = 1; i <= N; i++)
        cout << visited[i] << '\n';

	return 0;
}