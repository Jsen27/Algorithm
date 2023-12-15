#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	while(true){
		string str;
		getline(cin, str);
		stack<char> stk;
		bool flag = true;

		if (str[0] == '.')
			break;
		for(auto c : str){
			if (c == '(' || c == '[')
				stk.push(c);
			else if (c == ')'){
				if (!stk.empty() && stk.top() == '(')
					stk.pop();
				else{
					flag = false;
					break;
				}
			}else if (c == ']'){
				if (!stk.empty() && stk.top() == '[')
					stk.pop();
				else{
					flag = false;
					break;
				}
			}
		}
		if (flag == false || !stk.empty())
			cout << "no" << '\n';
		else
			cout << "yes" << '\n';
	}

	return 0;
}
