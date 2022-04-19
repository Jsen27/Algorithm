#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
};

string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
};

char board[51][51];

int WBcnt(int x, int y);
int BWcnt(int x, int y);

int main(void)
{
	int n, m, result = 9999;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	for(int i=0;i<n-7;i++)
		for (int j = 0; j < m - 7; j++)
		{
			int temp = min(WBcnt(i, j), BWcnt(i, j));
			if (temp < result)
				result = temp;
		}

	cout << result;


	return 0;
}

int WBcnt(int x, int y)
{
	int cnt = 0;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (board[i + x][j + y] != WB[i][j])
				cnt++;

	return cnt;
}

int BWcnt(int x, int y)
{
	int cnt = 0;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (board[i + x][j + y] != BW[i][j])
				cnt++;

	return cnt;
}