#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<pair<int, int>>man;

	for (int i = 0; i < n; i++)
	{
		int weight, high;
		cin >> weight >> high;
		man.push_back(make_pair(weight, high));
	}

	for (int i = 0; i < n; i++)
	{
		int rank = 1;
		for (int j = 0; j < n; j++)
			if (man[i].first < man[j].first && man[i].second < man[j].second)
				rank++;
		cout << rank << ' ';
	}
	return 0; 
}
