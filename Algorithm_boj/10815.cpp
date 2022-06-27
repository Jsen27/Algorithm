#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>my;
	int n, m, input;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		my.push_back(input);
	}
	sort(my.begin(), my.end());

	cin >> m;
	vector<int>deck(m);
	vector<int>ans(m);

	int low, mid, high;
	for (int i = 0; i < m; i++) {
		low = 0;
		high = n - 1;
		cin >> deck[i];
		while (low <= high) {
			mid = (low + high) / 2;
			if (my[mid] == deck[i]) {
				ans[i]++;
				break;
			}
			else if (my[mid] < deck[i])
				low = mid + 1;
			else if (my[mid] > deck[i])
				high = mid - 1;
		}
	}

	for (int i = 0; i < m; i++)
		cout << ans[i] << ' ';

	return 0;
}