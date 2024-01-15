#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, t, type, input;
int arr[102];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	cin >> t;

	while (t--){
		cin >> type >> input;

		if (type == 1){
			for(int i = 1; i <= n; i++)
				if (i % input == 0)
					arr[i] = arr[i] == 0 ? 1 : 0;	
		} else {
			int left = input - 1;
			int right = input + 1;
			arr[input] = arr[input] == 0 ? 1 : 0;
			while (left >= 1 && right <= n){
				if (arr[left] != arr[right])
					break;
				arr[left] = arr[left] == 0 ? 1 : 0;	
				arr[right] = arr[left];
				left--; right++;
			}
		}
	}
	for (int i = 1; i <= n; i++){
		cout << arr[i] << ' ';
		if (i % 20 == 0)
			cout << '\n';
	}
}
