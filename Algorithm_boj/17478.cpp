#include <iostream>
using namespace std;

void recursion(int n,int cnt);

int main(void)
{
	int n;
	cin >> n;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << '\n';
	recursion(n, 0);


	return 0;
}

void recursion(int n,int cnt)
{
	for (int i = cnt; i > 0; i--)
		cout << "____";
	cout << "\"����Լ��� ������?\"" << '\n';
	if (n == 0)
	{
		for (int i = cnt; i > 0; i--)
			cout << "____";
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << '\n';
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
	recursion(n - 1,++cnt);
	cnt--;
	for (int i = cnt; i > 0; i--)
		cout << "____";
	cout << "��� �亯�Ͽ���." << '\n';
}