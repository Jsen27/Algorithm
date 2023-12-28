#include <iostream>
#include <algorithm>
using namespace std;

pair<pair<int, int>, pair<int, int>> medal[1001];
int N, K;

bool cmp(pair<pair<int, int>, pair<int, int>> a, pair<pair<int, int>, pair<int, int>> b){
	if (a.first.second > b.first.second)
		return true;
	else if (a.first.second == b.first.second){
		if (a.second.first > b.second.first)
			return true;
		else if (a.second.first == b.second.first){
			if (a.second.second > b.second.second)
				return true;
			else if (a.second.second == b.second.second)
				return a.first.first == K;
		}
	}
	return false;
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	cin >> N >> K;

	for(int i = 0; i < N; i++)
		cin >> medal[i].first.first >> medal[i].first.second >> medal[i].second.first >> medal[i].second.second;
	
	sort(medal, medal + N, cmp);

	for(int i = 0; i < N; i++){
		if (medal[i].first.first == K){
			cout << i + 1;
			break;
		}
	}

	return 0;
}
