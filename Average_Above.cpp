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
문제 :
대학생 새내기들의 90%는 자신의 반에서 평균은 넘는다고 생각한다.
당신은 그들에게 슬픈 진실을 알려줘야 한다.
입력 :
첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 <= N <= 1000, N은 정수)이 첫 수로 주어지고
이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같다.
출력 :
각 케이스마다 한줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
테스트 케이스의 개수 C
학생의 수 N 1~1000
학생의 점수 0~100
*/