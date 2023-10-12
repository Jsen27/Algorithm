#include <iostream>
using namespace std;

int myarr[101];

int func2(int arr[], int N){
	for (int i = 0; i < N; i++){
		if (myarr[100 - arr[i]])
			return 1;
		myarr[arr[i]]++;
	}
	return 0;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int arr[129] = {0,};
	string str;
	cin >> str;
	for(int i = 0; i < str.length(); i++)
		arr[str[i]]++;
	for(int i = 'a'; i <= 'z'; i++)
		cout << arr[i] << ' ';
}