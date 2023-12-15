#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	int n, m, res = 0;
	cin >> n >> m;

	for(int i = 1; i <= n; i++)
		dq.push_back(i);

	while(m--){
		int val;
		cin >> val;

		if (val == dq.front()){
			dq.pop_front();
			continue;
		}
		
		for(int j = 0; j <= dq.size() / 2; j++){
			if(dq.at(j) == val){
				while (dq.front() != val){
					int tmp = dq.front();
					dq.pop_front();
					dq.push_back(tmp);
					res++;
				}
				dq.pop_front();
				continue;
			}
		}

		for(int j = dq.size() - 1; j > dq.size() / 2; j--){
			if(dq.at(j) == val){
				while (dq.back() != val){
					int tmp = dq.back();
					dq.pop_back();
					dq.push_front(tmp);
					res++;
				}
				dq.pop_back();
				res++;
				continue;
			}
		}		
	}

	cout << res;

	return 0;
}