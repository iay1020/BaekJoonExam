#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int iA, iB, iC, iSum = 0, iN = 0, iCnt = 0;
	cin >> iA >> iB >> iC;
	iSum = iA * iB * iC;
	iN = iSum;
	do {
		iN = int(iN / 10);
		iCnt++;
	} while (iN > 0);
	int* iArr = (int*)malloc(sizeof(int) * iCnt);
	if (iArr == NULL)
		return -1;
	for (int i = 0; i < iCnt; ++i)
	{
		iArr[i] = iSum / (int)pow(10, iCnt - (i + 1));
		iSum = iSum % (int)pow(10, iCnt - (i + 1));
	}
	int iCompare = 0;
	for (int i = 0; i < 10; ++i)
	{
		iCompare = 0;
		for (int j = 0; j < iCnt; ++j)
		{
			if (iArr[j] == i)
				++iCompare;
		}
		ios::sync_with_stdio(false);
		cout << iCompare << "\n";
	}
	free(iArr);
	return 0;
}

/*
3���� ���� �־��� ��
3���� ���� ���� ����� 0���� 9���� ���� ���ڰ� �� ���� �������� ���ϴ� ���α׷�
�Է� �޴� ���� ������ 100 ���� ���ų� ũ��, 1000���� ���� �ڿ���
����� 0���� 9���� �� �� �������� ���ʷ� �� �ٿ� �ϳ��� ���
*/