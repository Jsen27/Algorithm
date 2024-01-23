#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, input, total;
vector<int> v;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> input;
		v.push_back(input);
	}
	cin >> total;

	sort(v.begin(), v.end());

	int start = 0, end = v[n - 1];
	int res, sum, mid;
	
	while (start <= end){
		sum = 0;
		mid = (start + end) / 2;
		for (int i = 0; i < n; i++)
			sum += min(mid, v[i]);
		if (sum <= total){
			res = mid;
			start = mid + 1;
		} else
			end = mid - 1;
	}

	cout << res << '\n';

	return 0;
}
