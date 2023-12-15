#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	long long n;
	cin >> n;
	map<string, int> m;
	vector<string> v;
	while (n--){
		string name, act;
		cin >> name >> act;
		if (act == "enter")
			m[name] = 1;
		else
			m.erase(name);
	}
	for(auto i : m)
		v.push_back(i.first);
	sort(v.rbegin(), v.rend());
	for(auto i : v)
		cout << i << '\n';
	return 0;
}
