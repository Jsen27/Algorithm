#include <iostream>
#include <list>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	list<char> lst;
	string str;
	int N;

	cin >> str >> N;
	for(auto i = 0; i < str.length(); i++)
		lst.push_back(str[i]);
	auto it = lst.end();

	for(int i = 0; i < N; i++){
		char input;
		cin >> input;
		switch (input){
		case 'L':
			if (it != lst.begin()) it--;
			break;
		case 'D':
			if (it != lst.end()) it++;
			break;
		case 'B':
			if (it != lst.begin()){
				it--;
				it = lst.erase(it);
			}
			break;
		case 'P':
			cin >> input;
			lst.insert(it, input);
			break;
		default:
			break;
		}
	}
	for(auto e : lst) cout << e;
	return 0;
}