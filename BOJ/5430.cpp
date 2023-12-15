#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	int T;
	cin >> T;
	
	while (T--){
		string p;
		int n;
		cin >> p >> n;

		string input;
		cin >> input;

		string str = "";
		for(int i = 0; i < input.length(); i++){
			if (isdigit(input[i]))
				str += input[i];
			else{
				if (!str.empty()){
					dq.push_back(stoi(str));
					str = "";
				}
			}
		}

		int flag = 0;
		for(int i = 0; i < p.length(); i++){
			if (p[i] == 'R')
				flag = flag == 0 ? 1 : 0;
			else if (p[i] == 'D') {
				if (dq.empty()){
					flag = 2;
					break;
				} else if (flag == 0){
					dq.pop_front();
				} else
					dq.pop_back();
			}
		}

		if (flag == 2)
			cout << "error" << '\n';
		else if (flag == 0) {
			cout << '[';
			while (!dq.empty()){
				cout << dq.front();
				dq.pop_front();
				if (!dq.empty())
					cout << ',';
			}
			cout << ']' << '\n';
		} else if (flag == 1){
			cout << '[';
			while (!dq.empty()){
				cout << dq.back();
				dq.pop_back();
				if (!dq.empty())
					cout << ',';
			}
			cout << ']' << '\n';
		}

	}

	return 0;
}