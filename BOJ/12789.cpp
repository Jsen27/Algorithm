#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int N, num, cnt = 1;
	stack<int> stk;
	cin >> N;

	while(N--){
		cin >> num;

		if (num == cnt)
			cnt++;
		else
			stk.push(num);
		
		while(!stk.empty() && stk.top() == cnt){
			stk.pop();
			cnt++;
		}
	}
	
	if (!stk.empty())
		cout << "Sad" << '\n';
	else
		cout << "Nice" << '\n';

	return 0;
}
