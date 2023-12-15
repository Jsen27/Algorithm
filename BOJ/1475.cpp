#include <iostream>
using namespace std;

int arr[10];

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n != 0){
		arr[n % 10]++;
		n /= 10;
	}
	arr[6] = (arr[6] + arr[9] + 1) / 2;

	int max = 0;
	for (int i = 0; i < 9; i++)
		if (max < arr[i])
			max = arr[i];
	cout << max;
	
	return 0;
}