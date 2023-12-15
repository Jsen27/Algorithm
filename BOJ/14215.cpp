#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2];
	sort(v.begin(), v.end());
	if (v[0] == v[1] && v[1] == v[2])
		;
	else if (v[0] + v[1] <= v[2]){
		v[2] = v[0] + v[1] - 1;
	}
	cout << v[0] + v[1] + v[2];

	return 0;
}
