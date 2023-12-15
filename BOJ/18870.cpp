#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>v, v2;
	int input, n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
	}
	v2 = v;

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < n; i++)
		cout << lower_bound(v.begin(), v.end(), v2[i]) - v.begin() << ' ';

	return 0;
}