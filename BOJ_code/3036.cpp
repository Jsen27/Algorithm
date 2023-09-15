#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int>v;
	int n, input, g;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
	}
	
	for (int i = 1; i < n; i++) {
		g = gcd(v[0], v[i]);
		cout << v[0] / g << '/' << v[i] / g << '\n';
	}

	return 0;
}