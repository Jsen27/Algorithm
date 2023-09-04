#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	int n;

	cin >> str;
	cin >> n;

	cout << str[n - 1];

	return 0;
}