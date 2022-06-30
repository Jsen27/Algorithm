#include <iostream>
#include <map>
#include <cstdlib>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map<string, int>strmap;
	map<int, string>nummap;
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		string input;
		cin >> input;
		strmap.insert(pair<string, int>(input, i));
		nummap.insert(pair<int, string>(i, input));
	}

	for (int i = 0; i < M; i++) {
		char input[21];
		cin >> input;
		if (input[0] < 'A') {
			int num = atoi(input);
			cout << nummap[num] << '\n';
		}
		else
			cout << strmap[input] << '\n';
	}
	return 0;
}