#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n, b;
	string str = "";
	cin >> n >> b;

	while(n != 0){
		int num = n % b;
		if (num > 9)
			str += num - 10 + 'A';
		else
			str += num + '0';
		n /= b;
	}
	reverse(str.begin(), str.end());
	cout << str;

	return 0;
}
