#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int N , K;
	cin >> N >> K;

	for(int i = 1; i <= N / 2; i++){
		if (N % i == 0)
			K--;
		if (!K){
			cout << i;
			return 0;
		}
	}
	if (K == 1)
		cout << N;
	else 
		cout << '0';
	return 0;
}
