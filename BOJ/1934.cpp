#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a, b, g;
		cin >> a >> b;
		if (a > b)
			g = gcd(a, b);
		else
			g = gcd(b, a);

		cout << (a * b) / g << '\n';
	}
	return 0;
}

int gcd(int a, int b)
{
	int c = a % b;
	while (c) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}