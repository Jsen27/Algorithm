#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int arr[10] = { 0, };
	string str;
	cin >> str;

	int a;
	for (int i = 0; i < str.length(); i++)
	{
		a = str[i] - '0';
		arr[a]++;
	}

	for (int i = 9; i >= 0; i--)
		for (int j = arr[i]; j > 0; j--)
			cout << i;

	return 0;
}