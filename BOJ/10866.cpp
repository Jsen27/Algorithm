#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;

	int N;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		string str;
		cin >> str;

		if (str == "push_front"){
			int val;
			cin >> val;
			dq.push_front(val);
		} else if (str == "push_back"){
			int val;
			cin >> val;
			dq.push_back(val);
		} else if (str == "pop_front"){
			if (dq.empty()) cout << -1 << '\n';
			else {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		} else if (str == "pop_back"){
			if (dq.empty()) cout << -1 << '\n';
			else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		} else if (str == "size"){
			cout << dq.size() << '\n';
		} else if (str == "empty"){
			if (dq.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		} else if (str == "front"){
			if (dq.empty()) cout << -1 << '\n';
			else cout << dq.front() << '\n';
		} else if (str == "back"){
			if (dq.empty()) cout << -1 << '\n';
			else cout << dq.back() << '\n';
		}
	}

	return 0;
}