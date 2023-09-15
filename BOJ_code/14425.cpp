#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	map<string, bool>m;
	string input;
	int N, M, cnt;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> input;
		m.insert(pair<string, bool>(input, true));
	}
	cnt = 0;
	for (int i = 0; i < M; i++) {
		cin >> input;
		if (m[input])
			cnt++;
	}

	cout << cnt;

	return 0;
}