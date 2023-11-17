#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n, tmp;
	while (1){
		vector<int> v;
		cin >> n;
		tmp = n;
		if (n == -1)
			break;
		for(int i = 1; i <= n / 2; i++){
			if (n % i == 0){
				v.push_back(i);
				tmp -= i;
			}
		}
		if (tmp == 0){
			cout << n << " = ";
			for(int j = 0; j < v.size(); j++){
				cout << v[j];
				if (j + 1 != v.size())
					cout << " + ";
			}
		} else 		
			cout << n << " is NOT perfect.";
		cout << '\n';
	}
	return 0;
}
