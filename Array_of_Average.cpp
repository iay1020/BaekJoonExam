/*
���� �� �ִ� ����
�� ���� M�̶�� ����
��� ������ ����/M*100���� ���ƴ�.
�������
�ְ����� 70�̰�, ���������� 50�̶�� ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.
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

// ó�� ������ ���� ���� �ڵ�
// ���� ��¿��� �ڰ� 0�̶�� �Ҽ� 2��° �ڸ����� ���� ����� ���̴�.
// ������ ���� �Ҽ��� ��� 6��° �ڸ����� ��� �ǰ� �ݿø� �Ǵ� ����� ������.
// �׷��� �װ� �����Ϸ��� �ߴ��� ���� �ڵ��ε�, ����� ���ϴ� �ĵ� �ʹ� ��� ���������.
// �� �ڵ�� ������ �ذ� �� �Ŀ� �ٸ� ����� �ڵ带 ���鼭 �˰� �Ǿ��µ�
// �� ���� ������ ���� �� ���ؼ� ����� ���� �Ѵٰ� ������ �߾���.
// ������ ��� ������ ���ؼ� �� �Ŀ� ����� ���� �Ȱ��� ���� �����°� Ȯ���ߴ�.
// �Ҽ��� �ڸ� ����� ������ٴ°� �˰� �ǰ� �� �Ŀ� �ۼ��Ѱ� �Ʒ� �ڵ�



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

// �ʿ���ٰ� �����ϴ� ������ �ݺ��� �׸��� ���ǹ��� �����ߴ�.
// ��� ���ؼ� �ѹ��� ����� ���ع����� �ȴٴ°� �˾ұ� ������ ��¹��� �ٷ� ������.
// cout.precision�̳� fixed���� ��쿡�� ������ ������ Ǯ�鼭 �Ҽ��� ��� ����ؾ� �ұ�
// �˻��غ��ٰ� �˰� �ƾ���. 
// �ƹ�ư �̷��� �ۼ��� �ڵ嵵 �ٷ� �����ߴ�.
