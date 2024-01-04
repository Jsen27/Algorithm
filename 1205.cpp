#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	int N, score, P, input;
	int rank = 1;
	vector<int> v;

	cin >> N >> score >> P;

	for(int i = 0; i < N; i++){
		cin >> input;
		v.push_back(input);
	}
	if (N == P && input >= score)
		cout << -1 << '\n';
	else {
		for(int i = 0; i < N; i++)
			if (v[i] > score)
				rank++;
			else
				break;
		cout << rank << '\n';
	}

	return 0;
}
