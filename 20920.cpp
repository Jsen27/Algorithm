#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int N, M;
vector<string> v;
map<string, int> m;

bool compare(string a, string b) {
    if (a.size() == b.size() && m[a] == m[b]) {
        return a < b;
    }
    else if (m[a] == m[b]) {
        return a.size() > b.size();
    }
    return m[a] > m[b];
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	cin >> N >> M;

	for (int i = 0; i < N; i++){
		string str;
		cin >> str;
		if (str.length() < M)
			continue;
		if (m[str] == 0)
			v.push_back(str);
		m[str]++;
	}

	sort(v.begin(), v.end(), compare);

	for (auto i : v)
		cout << i << '\n';
}
