#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, g;
	cin >> a >> b;
	if (a > b)
		g = gcd(a, b);
	else
		g = gcd(b, a);

	cout << g << '\n' << (a * b) / g;

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