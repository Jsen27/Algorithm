#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<pair<int, int>>v;
	int c, maxi, result;
	cin >> c;
	for (int i = 0; i < 6; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	maxi = 1;
	for (int i = 0; i < 6; i++) {
		int cur = v[i].second * v[(i + 1) % 6].second;
		if (maxi == 1 || cur > maxi) {
			maxi = cur;
			result = (maxi - v[(i + 3) % 6].second * v[(i + 4) % 6].second) * c;
		}
	}
	
	cout << result;

	return 0;
}