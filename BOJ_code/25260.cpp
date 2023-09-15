#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    string str, grade;
    double n, ret = 0, credit = 0;

    for(int i = 0; i < 20; i++){
        cin >> str >> n >> grade;
        if (grade == "P")
            continue;
        credit += n;
        if (grade == "A+")
            ret += n * 4.5;
        else if (grade == "A0")
            ret += n * 4;
        else if (grade == "B+")
            ret += n * 3.5;
        else if (grade == "B0")
            ret += n * 3;
        else if (grade == "C+")
            ret += n * 2.5;
        else if (grade == "C0")
            ret += n * 2;
        else if (grade == "D+")
            ret += n * 1.5;
        else if (grade == "D0")
            ret += n * 1;
    }

    cout << ret / credit;

	return 0;
}