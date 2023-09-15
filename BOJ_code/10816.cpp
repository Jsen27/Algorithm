#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int>card;
	int N, M, input;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		card.push_back(input);
	}
	sort(card.begin(), card.end());

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> input;
		cout << upper_bound(card.begin(), card.end(), input) - lower_bound(card.begin(), card.end(), input) << ' ';
	}

	return 0;
}