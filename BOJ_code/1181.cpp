#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	vector<pair<int, string>>v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		v.push_back(make_pair(str.length(), str));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		if (i + 1 == n)
		{
			cout << v[i].second << '\n';
			break;
		}
		else if (v[i].second != v[i + 1].second)
			cout << v[i].second << '\n';
	}

	return 0;
}