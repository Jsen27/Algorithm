#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[6];

    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 2;
    arr[4] = 2;
    arr[5] = 8;

    for(int i = 0; i < 6; i++){
        int n;
        cin >> n;
        arr[i] -= n;
        cout << arr[i] << ' ';
    }

	return 0;
}