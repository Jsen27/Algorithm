#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[31] = {0,};
	int n;
	for (int i = 0; i < 28; i++){
		cin >> n;
		arr[n]++;
	}

	for(int i = 1; i <= 30; i++){
		if (arr[i] == 0)
			cout << i << endl;
	}

	return 0;
}