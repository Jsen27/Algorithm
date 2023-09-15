#include <iostream>
#include <string>
using namespace std;

int solution(int n);

int main(void)
{
	int n;
	cin >> n;
	
	solution(n);

	return 0;
}

int solution(int n)
{
	int a = 666;
	int ans = 0;
	string str;

	while (1)
	{
		str = to_string(a);
		for (int i = 0; i < str.length() - 2; i++)
		{
			if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6')
			{
				ans++;
				if (ans == n)
				{
					cout << str << '\n';
					return 0;
				}
				break;
			}
		}
		a++;
	}
}