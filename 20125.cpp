#include <iostream>
#include <algorithm>

using namespace std;

int N, X, Y;
int heartX, heartY, leftArm, rightArm, back, leftLeg, rightLeg;
string map[1001];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	cin >> N;
	
	for(int i = 0; i < N; i++){
		string str;
		cin >> str;
		map[i] = str;
	}

	// 머리를 통해 심장 찾기
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if (map[i][j] == '*'){
				heartX = i + 1;
				heartY = j;
				break;
			}
		}
		if (heartX != 0 || heartY != 0)
			break;
	}

	// 팔 길이
	bool flag = false;
	for(int j = 0; j < N; j++){
		int i = heartX;
		if (j == heartY){
			flag = true;
			continue;
		} else if (map[i][j] == '*' && !flag)
			leftArm++;
		else if (map[i][j] == '*' && flag)
			rightArm++;
	}

	// 허리 길이
	for(int i = heartX + 1, j = heartY; i < N; i++){
		if (map[i][j] == '*')
			back++;
		else
			break;
	}

	// 왼쪽 다리 길이
	for(int i = heartX + back + 1, j = heartY - 1; i < N; i++){
		if (map[i][j] == '*')
			leftLeg++;
		else
			break;
	}

	// 오른쪽 다리 길이
	for(int i = heartX + back + 1, j = heartY + 1; i < N; i++){
		if (map[i][j] == '*')
			rightLeg++;
		else
			break;
	}

	cout << heartX + 1 << ' ' << heartY + 1 << '\n';
	cout << leftArm << ' ' << rightArm << ' ' << back << ' ' << leftLeg << ' ' << rightLeg << '\n';

	return 0;
}
