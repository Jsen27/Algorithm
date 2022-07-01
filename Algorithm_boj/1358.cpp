#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int W, H, X, Y, P;
	int cnt = 0;
	cin >> W >> H >> X >> Y >> P;
	for (; P--;) {
		int a, b;
		cin >> a >> b;
		
		if ((a - X) * (a - X) + (b - (Y + H / 2)) * (b - (Y + H / 2)) <= (H / 2) * (H / 2) && a < X)
			cnt++;
		else if (X <= a && a <= X + W && Y <= b && b <= Y + H)
			cnt++;
		else if ((a - (X + W)) * (a - (W + X)) + (b - (Y + H / 2)) * (b - (Y + H / 2)) <= (H / 2) * (H / 2) && X + W < a)
			cnt++;
	}

	cout << cnt;

	return 0;
}