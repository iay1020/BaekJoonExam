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
3개의 수가 주어질 때
3개의 수의 곱의 결과에 0부터 9까지 각각 숫자가 몇 번씩 쓰였는지 구하는 프로그램
입력 받는 수의 범위는 100 보다 같거나 크고, 1000보다 작은 자연수
출력은 0부터 9까지 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력
*/