#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	queue<int> q;
	int n;
	cin >> n;

	for(int i = 1; i <= n; i++)
		q.push(i);
	
	while (q.size() != 1){
		int num;
		q.pop();
		if (q.size() == 1)
			break;
		num = q.front();
		q.pop();
		q.push(num);
	}

	cout << q.front();

	return 0;
}