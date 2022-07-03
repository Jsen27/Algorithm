#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int>v, ans;
	int n, input, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	
	temp = v[1] - v[0];
	for (int i = 2; i < n; i++)
		temp = gcd(temp, v[i] - v[i - 1]);

	for (int i = 2; i * i <= temp; i++)
		if (temp % i == 0) {
			ans.push_back(i);
			ans.push_back(temp / i);
		}
	ans.push_back(temp);
	sort(ans.begin(), ans.end());
	ans.erase(unique(ans.begin(), ans.end()), ans.end());
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << ' ';

	return 0;
}