#include <iostream>
using namespace std;

void recursion(int n, int cnt);

int main(void)
{
	int n, cnt = 0;
	cin >> n;
	
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << '\n';
	recursion(n, cnt);

	return 0;
}

void recursion(int n, int cnt)
{
	int temp = cnt;
	for (int i = cnt; i > 0; i--)
		cout << "____";
	cout << "\"����Լ��� ������?\"" << '\n';
	if (n == 0)
	{
		for (int i = cnt; i > 0; i--)
			cout << "____";
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\""<<'\n';
		for (int i = cnt; i > 0; i--)
			cout << "____";
		cout << "��� �亯�Ͽ���." << '\n';
		return;
	}
	for (int i = cnt; i > 0; i--)
		cout << "____";
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << '\n';
	for (int i = cnt; i > 0; i--)
		cout << "____";
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << '\n';
	for (int i = cnt; i > 0; i--)
		cout << "____";
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << '\n';
	recursion(n - 1, ++cnt);
	for (int i = cnt-1; i > 0; i--)
		cout << "____";
	cout << "��� �亯�Ͽ���." << '\n';
}