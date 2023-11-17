#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	while (1){
		int a, b, c;
		cin >> a >> b >> c;
		vector<int> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(), v.end());
		if (a == 0 && b == 0 && c == 0)
			break;
		if (v[0] + v[1] <= v[2])
			cout << "Invalid" << '\n';
		else if (a == b && b == c)
			cout << "Equilateral" << '\n';
		else if (a == b || b == c || a == c)
			cout << "Isosceles" << '\n';
		else
			cout << "Scalene" << '\n';
	}

	return 0;
}
