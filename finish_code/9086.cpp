#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string str;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> str;
		cout << str[0] << str[str.length() - 1] << endl;
	}

	return 0;
}