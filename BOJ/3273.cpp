#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[10000001];
int cnt;
vector<int> v;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, x;
	cin >> n;

	for(int i = 0, input; i < n; i++){
		cin >> input;
		arr[input]++;
		v.push_back(input);
	}

	cin >> x;

	for(int i = 0; i < n; i++){
		int tmp = x - v[i];
		if (tmp > 0 && tmp < 1000001 && arr[tmp]){
			cnt++;
		}
	}

	cout << cnt / 2;
	
	return 0;
}