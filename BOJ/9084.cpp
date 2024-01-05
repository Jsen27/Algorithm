#include <iostream>
#include <vector>

using namespace std;

int T;
int dp[10001];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	cin >> T;

	while(T--){
		int n, m;

		cin >> n;
		vector<int> coins;
		coins.push_back(0);
		for(int i = 0; i < n; i++){
			int input;
			cin >> input;
			coins.push_back(input);
		}

		cin >> m;

		fill(dp, dp + 10001, 0);

		dp[0] = 1;

		for(int i = 1; i <= n; i++){
			for(int j = coins[i]; j <= m; j++){
				dp[j] += dp[j - coins[i]];
			}
		}

		cout << dp[m] << '\n';
	}

	return 0;
}
