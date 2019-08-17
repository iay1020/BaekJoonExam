/*
점수 중 최댓값 고르기
이 값을 M이라고 하자
모든 점수를 점수/M*100으로 고쳤다.
예를들어
최고점이 70이고, 수학점수가 50이라면 수학점수는 50/70*100이 되어 71.43점이 된다.
*/


#include<iostream>
using namespace std;
int main() {
	int N, iMax = 0;
	cin >> N;
	double* dArr = new double[N];
	double dAvg = 0;
	if (dArr == NULL)
		return -1;
	for (int i = 0; i < N; ++i)
	{
		cin.tie(NULL);
		cin >> dArr[i];
		if (iMax < dArr[i])
			iMax = dArr[i];
	}
	for (int i = 0; i < N; ++i)
	{
		if (dArr[i] != 0)
		{
			dArr[i] = dArr[i] / iMax * 100.0;
			dAvg += dArr[i];
		}
		else
			dAvg += 0;
	}
	dAvg /= N;
	int iAvg = dAvg * 100;
	if (iAvg % 10 == (iAvg / 10) % 10 && iAvg % 10 > 0)
	{
		ios::sync_with_stdio(false);
		cout << fixed << dAvg;
	}
	else
	{
		ios::sync_with_stdio(false);
		cout.precision(2);
		cout << fixed << dAvg;
	}
	delete[] dArr;
	return 0;
}

// 처음 문제를 보고 만든 코드
// 예제 출력에서 뒤가 0이라면 소수 2번째 자리에서 끊는 모습이 보셨다.
// 하지만 무한 소수의 경우 6번째 자리까지 출력 되고 반올림 되는 모습이 보였다.
// 그래서 그걸 구현하려고 했던게 위에 코드인데, 평균을 구하는 식도 너무 길게 만들어졌다.
// 이 코드로 문제를 해결 한 후에 다른 사람의 코드를 보면서 알게 되었는데
// 난 각각 점수를 나눈 후 더해서 평균을 내야 한다고 생각을 했었다.
// 하지만 모든 점수를 더해서 그 후에 평균을 내도 똑같은 값이 나오는걸 확인했다.
// 소수점 자리 출력이 상관없다는걸 알게 되고 난 후에 작성한게 아래 코드



#include<iostream>
using namespace std;
int main() {
	int N, iMax = 0;
	float fSum = 0;
	cin >> N;
	double* dArr = new double[N];
	for (int i = 0; i < N; ++i)
	{
		cin.tie(NULL);
		cin >> dArr[i];
		if (iMax < dArr[i])
			iMax = dArr[i];
		fSum += dArr[i];
	}
	ios::sync_with_stdio(false);
	cout.precision(2);
	cout << fixed << fSum / iMax * 100 / N;
	delete[] dArr;
	return 0;
}

// 필요없다고 생각하는 변수나 반복문 그리고 조건문을 삭제했다.
// 모두 더해서 한번에 평균을 구해버리면 된다는걸 알았기 때문에 출력문에 바로 적었다.
// cout.precision이나 fixed같은 경우에는 예전에 예제를 풀면서 소수를 어떻게 출력해야 할까
// 검색해보다가 알게 됐었다. 
// 아무튼 이렇게 작성한 코드도 바로 성공했다.
