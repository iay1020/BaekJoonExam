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
0 ~ 99 까지의 수를 입력 받는다.
입력 받은 값이 10보다 작다면 앞에 0을 붙여 두 자리 수를 만들고, 각 숫자를 더한다.
그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙이면
새로운 수를 만들 수 있다.
예)
시작 26
2 + 6 = 8

새로운 수 68
6 + 8 = 14

새로운 수 84
8 + 4 = 12

새로운 수 42
4 + 2 = 6

새로운 수 26

26의 사이클의 길이는 4

N이 주어졌을때, N의 사이클의 길이를 구하세요.
*/