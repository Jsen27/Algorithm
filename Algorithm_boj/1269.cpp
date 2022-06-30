#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map<int, int>m;
	int N, M, input;
	cin >> N >> M;
	for (int i = 0; i < N + M; i++) {
		cin >> input;
		if (m[input])
			m.erase(input);
		else
			m[input]++;
	}
	cout << m.size();

	return 0;
}