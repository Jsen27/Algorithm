#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	vector<long long> v;
	int T;
	cin >> T;
	while(T--){
		long long num;
		cin >> num;
		if (num == 0)
			v.pop_back();
		else
			v.push_back(num);
	}
	long long ret = 0;
	for(int i = 0; i < v.size(); i++)
		ret += v[i];
	
	cout << ret;

	return 0;
}
