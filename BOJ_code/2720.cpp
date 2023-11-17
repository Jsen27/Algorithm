#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int T, n;
	cin >> T;

	while(T--){
		int a = 0, b = 0, c = 0, d = 0;
		cin >> n;
		a = n / 25;
		n %= 25; 
		b = n / 10;
		n %= 10;
		c = n / 5;
		n %= 5;
		d = n;
		cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
	}

	return 0;
}
