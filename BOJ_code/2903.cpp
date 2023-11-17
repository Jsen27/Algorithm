#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int N , dot = 2;
	cin >> N;
	while (N--)
		dot = dot * 2 - 1;
	cout << dot * dot;
	return 0;
}
