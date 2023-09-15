#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for(int i = 1; i <= n; i++) {
		for(int k = 1; k <= n - i; k++)
			cout << ' ';
		for(int k = 1; k <= i + (i - 1); k++)
			cout << '*';

		cout << endl;
	}

	for(int i = n - 1; i > 0; i--) {
		for(int k = 1; k <= n - i; k++)
			cout << ' ';
		for(int k = 1; k <= i + (i - 1); k++)
			cout << '*';

		cout << endl;
	}

	return 0;
}