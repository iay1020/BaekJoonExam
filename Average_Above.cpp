#include<iostream>
using namespace std;
int main()
{
	int C;
	cin >> C;
	int N;
	int iSum = 0, iCnt = 0;
	float fAvg = 0;
	for (int i = 0; i < C; ++i)
	{
		cin.tie(NULL);
		cin >> N;
		int* iArr = new int[N];
		for (int j = 0; j < N; ++j)
		{
			cin.tie(NULL);
			cin >> iArr[j];
			iSum += iArr[j];
		}
		fAvg = iSum / (double)N;
		iCnt = 0;
		for (int k = 0; k < N; ++k)
		{
			if (fAvg < iArr[k])
				++iCnt;
		}
		ios::sync_with_stdio(false);
		cout.precision(3);
		cout << fixed << (iCnt / (double)N) * 100 << "%\n";
		iSum = 0;
		delete[] iArr;
	}
	return 0;
}
/*
���� :
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�.
����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
�Է� :
ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.
��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 <= N <= 1000, N�� ����)�� ù ���� �־�����
�̾ N���� ������ �־�����. ������ 0���� ũ�ų� ����, 100���� �۰ų� ����.
��� :
�� ���̽����� ���پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.
�׽�Ʈ ���̽��� ���� C
�л��� �� N 1~1000
�л��� ���� 0~100
*/