#include <iostream>
#include <algorithm>

using namespace std;

string s, t, temp = "";

void solve(string s, string t){
	if (s == t){
		cout << 1 << '\n';
		exit(0);
	}
	if (s.size() >= t.size()) return;

	if (t[t.size() - 1] == 'A'){
		temp = t;
		temp.erase(temp.size() - 1);
		solve(s, temp);
	}
	
	if (t[0] == 'B'){
		temp = t;
		temp.erase(temp.begin());
		reverse(temp.begin(), temp.end());
		solve(s, temp);
	}
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	cin >> s >> t;
	solve(s, t);
	cout << 0 << '\n';
	return 0;
}
