#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	for (; T--;) {
		int sx, sy, dx, dy, ans;
		cin >> sx >> sy >> dx >> dy;
		ans = 0;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int x, y, r, cnt;
			cnt = 0;
			cin >> x >> y >> r;
			int dist = (sx - x) * (sx - x) + (sy - y) * (sy - y);
			if (dist <= r * r)
				cnt++;
			dist = (dx - x) * (dx - x) + (dy - y) * (dy - y);
			if (dist <= r * r)
				cnt++;
			if (cnt == 1)
				ans++;
		}
		cout << ans << '\n';
	}

	return 0;
}