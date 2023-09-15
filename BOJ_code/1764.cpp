#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map<string, int>m;
	vector<string>v;
	int N, M;
	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		m[str]++;
	}

	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;
		if (m[str])
			v.push_back(str);
	}

	cout << v.size() << '\n';
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';

	return 0;
}