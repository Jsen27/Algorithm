#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n;
	cin >> n;
	vector<int> vx, vy;
	while (n--){
		int x, y;
		cin >> x >> y;
		vx.push_back(x);
		vy.push_back(y);
	}
	sort(vx.begin(), vx.end());
	sort(vy.begin(), vy.end());
	cout <<  (vx.back() - vx.front()) * (vy.back() - vy.front());
	
	return 0;
}
