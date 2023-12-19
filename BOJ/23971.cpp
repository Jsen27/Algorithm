#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	double H, W, N, M;
	cin >> H >> W >> N >> M;

	cout << static_cast<long>(ceil(H / (N + 1))) * static_cast<long>(ceil(W / (M + 1)));

	return 0;
}
