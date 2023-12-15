#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int T;
	cin >> T;

	while (T--){
		int check = 0;
		string str;
		cin >> str;
		for(int i = 0; i < str.length(); i++){
			if (str[i] == '(')
				check++;
			else
				check--;
			if (check < 0)
				break;
		}
		if (check == 0)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}
