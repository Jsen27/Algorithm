#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	string str;
	int b, cnt = 0, tmp = 0, sum = 0;
	cin >> str >> b;
	
	for(int i = str.length() - 1; i >= 0; i--){
		if (str[i] >= '0' && str[i] <= '9')
			tmp = str[i] - '0';
		else
			tmp = str[i] - 'A' + 10;
		sum += tmp * ((int)pow(b, cnt));
		cnt++;
	}
	cout << sum;


	return 0;
}
