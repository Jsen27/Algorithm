#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	set<string>ans;
	string str;
	cin >> str;

	string temp;
	for (int i = 0; i < str.length(); i++) {
		for (int j = i; j < str.length(); j++) {
			temp += str[j];
			ans.insert(temp);
		}
		temp = "";
	}

	cout << ans.size();

	return 0;
}