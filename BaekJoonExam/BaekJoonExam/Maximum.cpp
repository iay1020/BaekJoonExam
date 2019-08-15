#include<iostream>
using namespace std;
int main()
{
	int iCount = 0, iMax = -100, iArr[9] = {};
	for (int i = 0; i < 9; ++i)
	{
		cin.tie(NULL);
		cin >> iArr[i];
		if (iMax < iArr[i])
		{
			iMax = iArr[i];
			iCount = i + 1;
		}
	}
	ios::sync_with_stdio(false);
	cout << iMax << "\n" << iCount;
	return 0;
}