#include <iostream>
using namespace std;

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