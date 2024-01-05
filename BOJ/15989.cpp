#include <iostream>
#include <vector>

using namespace std;

int T, n;
int dp[10001];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	cin >> T;

	while(T--){
		cin >> n;

		fill(dp, dp + 10001, 0);
		dp[0] = 1;

		for(int i = 1; i <= 3; i++)
			for(int j = i; j <= n; j++)
				dp[j] += dp[j - i];

		cout << dp[n] << '\n';
	}

	return 0;
}
