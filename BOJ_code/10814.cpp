#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool boj(pair<int, string>a, pair<int, string>b);

int main(void)
{
	vector<pair<int, string>>v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		v.push_back(make_pair(age, name));
	}

	stable_sort(v.begin(), v.end(), boj);

	for (int i = 0; i < n; i++)
		cout << v[i].first << ' ' << v[i].second << '\n';

	return 0;
}

bool boj(pair<int, string>a, pair<int, string>b)
{
	return a.first < b.first;
}