#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int num[8001] = { 0, };

int main(void)
{
	int n;
	cin >> n;
	vector<int>arr;
	

	double A = 0;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		arr.push_back(input);
		num[input + 4000]++;
		A += input;
	}
	sort(arr.begin(), arr.end());
	int B = arr[n / 2];
	int C = 0, cnt = 0;
	
	for(int i=0;i<8001;i++)
		if (cnt < num[i])
		{
			cnt = num[i];
			C = i;
		}
	for(int i=C+1;i<8001;i++)
		if (cnt == num[i])
		{
			C = i;
			break;
		}
	int D = arr[n - 1] - arr[0];
	if (round(A / (double)n) == -0)
		cout << '0' << '\n';
	else
		cout << round(A / (double)n) << '\n';
	cout << B << '\n';
	cout << C-4000 << '\n' << D << '\n';

	return 0;
}