#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	vector<int> v;
	int T;
	cin >> T;
	while(T--){
		int com, num;
		cin >> com;

		if (com == 1){
			cin >> num;
			v.push_back(num);
		} else if (com == 2){
			if (v.empty())
				cout << -1 << '\n';
			else{
				cout << v.back() << '\n';
				v.pop_back();
			}
		} else if (com == 3)
			cout << v.size() << '\n';
		else if (com == 4){
			if (v.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else{
			if (v.empty())
				cout << -1 << '\n';
			else
				cout << v.back() << '\n';
		}
	}
	
	return 0;
}
