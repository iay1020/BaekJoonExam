#include<iostream>
using namespace std;
int main() {
	int N, Result = 0, Cycle = 0;
	cin.tie(NULL);
	cin >> N;
	if (N < 10)
	{
		Result = (0 + N) + N * 10;
		++Cycle;
	}
	else
	{
		Result = (N / 10) + (N % 10);
		if (Result % 10 == 0)
		{
			Result = (N % 10 * 10);
		}
		else
			Result = (Result % 10) + (N % 10 * 10);
		++Cycle;
	}
	while (N != Result)
	{
		Result = ((Result / 10) + (Result % 10)) % 10 + (Result % 10) * 10;
		++Cycle;
	}
	ios::sync_with_stdio(false);
	cout << Cycle;
	return 0;
}
/*
0 ~ 99 ������ ���� �Է� �޴´�.
�Է� ���� ���� 10���� �۴ٸ� �տ� 0�� �ٿ� �� �ڸ� ���� �����, �� ���ڸ� ���Ѵ�.
�� ����, �־��� ���� ���� ������ �ڸ� ���� �տ��� ���� ���� ���� ������ �ڸ� ���� �̾� ���̸�
���ο� ���� ���� �� �ִ�.
��)
���� 26
2 + 6 = 8

���ο� �� 68
6 + 8 = 14

���ο� �� 84
8 + 4 = 12

���ο� �� 42
4 + 2 = 6

���ο� �� 26

26�� ����Ŭ�� ���̴� 4

N�� �־�������, N�� ����Ŭ�� ���̸� ���ϼ���.
*/