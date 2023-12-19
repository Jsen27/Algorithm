#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	vector<int> v;
	int T;

	cin >> T;

	while(T--){
		string str;
		int num;
		cin >> str;
		if (str != "all" && str != "empty")
			cin >> num;
		auto it = find(v.begin(), v.end(), num);
		if (str == "add" && it == v.end())
			v.push_back(num);
		else if (str == "remove" && it != v.end())
			v.erase(it);
		else if (str == "check"){
			if (it == v.end())
				cout << 0 << '\n';
			else
				cout << 1 << '\n';
		} else if (str == "toggle"){
			if (it == v.end())
				v.push_back(num);
			else
				v.erase(it);
		} else if (str == "all"){
			v.clear();
			for(int i = 1; i <= 20; i++)
				v.push_back(i);
		} else if (str == "empty")
			v.clear();
	}

	return 0;
}
