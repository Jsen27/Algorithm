#include <iostream>
#include <vector>
using namespace std;

int students[20];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int T, num, result = 0;
    cin >> T;

    for (int tc = 0; tc < T; tc++) {
        cin >> num;
        result = 0;
        for (int i = 0; i < 20; i++) cin >> students[i];
        for (int i = 0; i < 20; i++) {
            for (int j = i; j < 20; j++) {
                if (students[i] > students[j]) result += 1;
            }
        }
        cout << num << ' ' << result << "\n";
    }

	return 0;
}
