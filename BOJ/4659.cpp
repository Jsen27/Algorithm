#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


	while (true){
		string str;
		bool flag1 = false, flag2 = true;
		int cnt1 = 0, cnt2 = 0;
		
		cin >> str;

		if (str == "end")
			break;
		for(int i = 0; i < str.length(); i++){
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
				flag1 = true;
				cnt1++;
				cnt2 = 0;
			}else{
				cnt1 = 0;
				cnt2++;
			}
			if (cnt1 >= 3 || cnt2 >= 3){
				flag2 = false;
				break;
			}
			if (i && (str[i] == str[i - 1] && (str[i] != 'e' && str[i] != 'o'))){
				flag2 = false;
				break;
			}
		}
		cout << "<" << str << "> is ";
		if (flag1 && flag2)
			cout << "acceptable." << '\n';
		else
			cout << "not acceptable." << '\n';
	}

	return 0;
}
