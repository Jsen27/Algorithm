#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[101];

	int N, M;
	
	cin >> N >> M;

	for(int i = 1; i <= N; i++){
		arr[i] = i;
	}

	for (int i = 0; i < M; i++){
		int a, b, tmp;
		cin >> a >> b;

		tmp = arr[a];
		arr[a] = arr[b];
		arr[b] = tmp;
	}

	for(int i = 1; i <= N; i++){
		cout << arr[i] << ' ';
	}

	return 0;
}