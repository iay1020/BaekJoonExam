#include<iostream>
using namespace std;
int main()
{
	int iNum, iCnt=0, iArr[10] = { 0 };
	for (int i = 0; i < 10; ++i)
	{
		cin.tie(NULL);
		cin >> iNum;
		iArr[i] = iNum % 42;
	}
	bool iSsibal = false;
		for (int i = 0; i < 10; ++i)
		{
			iSsibal = false;
			for (int j = 0; j < 10; ++j)
			{
				if (iArr[i] <= 1000)
				{
					if (iArr[i] == iArr[j])
					{
						iSsibal = true;
						if(i != j)
						iArr[j] = 1001;
					}
				}
			}
			iArr[i] = 1001;
			if (iSsibal == true)
				iCnt += 1;
		}
		ios::sync_with_stdio(false);
		cout << iCnt;
	
	return 0;
}

/*
���� :
�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. 
���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�.
�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. 
�� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� :
ù° �ٺ��� ����° �� ���� ���ڰ� �� �ٿ� �ϳ��� �־�����.
�� ���ڴ� 1,000���� �۰ų� ����, ���� �ƴ� �����̴�.

��� : 
ù° �ٿ�, 42�� �������� ��, ���� �ٸ� �������� �� �� �ִ��� ����Ѵ�.
*/