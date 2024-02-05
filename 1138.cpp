#include <iostream>
#include <vector>

using namespace std;

int n;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	cin >> n;
	vector<int> v(n), ans(n, 0);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	for (int i = 0; i < n; i++){
		int j = 0;
		while (v[i] != 0){ // 내 앞의 사람만큼 건너뛰기
			if (ans[j] == 0) // 0이라면 나보다 키가 큰 사람
				v[i]--;
			j++;
		}
		while (ans[j] != 0) // 사람이 있다면 건너뛰기
			j++;
		ans[j] = i + 1;
	}

	for (int i = 0; i < n; i++)
		cout << ans[i] << '\n';

	return 0;
}
