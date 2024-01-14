#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int T, k;
string str;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	cin >> T;
	while (T--){
		cin >> str >> k;

		vector<int> v(26);

		int ans1 = 10001, ans2 = -1;

		for (int i = 0; i < str.length(); i++)
			v[str[i] - 'a']++;

		for (int i = 0; i < str.length(); i++){
			if (v[str[i] - 'a'] < k)
				continue;
			
			int cnt = 0;
			for (int j = i; j < str.length(); j++){
				if (str[i] == str[j])
					cnt++;

				if (cnt == k){
					ans1 = min(ans1, j - i + 1);
					ans2 = max(ans2, j - i + 1);
					break;
				}
				
			}
		}
		if (ans1 == 10001 || ans2 == -1)
			cout << -1 << '\n';
		else
			cout << ans1 << ' ' << ans2 << '\n';
	}
	return 0;
}
