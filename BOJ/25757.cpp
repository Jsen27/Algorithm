#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<string, int> m;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n;
	char type;

	cin >> n >> type;

	for(int i = 0; i < n; i++){
		string str;
		cin >> str;
		m[str]++;
	}

	if (type == 'Y')
		n = 1;
	else if (type == 'F')
		n = 2;
	else
		n = 3;
	
	cout << m.size() / n << '\n';

	return 0;
}
