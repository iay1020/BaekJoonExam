#include<iostream>
using namespace std;
int main()
{
	long long iNum, iValue, iMin = 1000000, iMax = -1000000;
	cin >> iNum;
	for (int i = 0; i < iNum; ++i)
	{
		cin.tie(NULL);
		cin >> iValue;
		if (iMin >= iValue)
			iMin = iValue;
		if (iMax <= iValue)
			iMax = iValue;
	}
	ios::sync_with_stdio(false);
	cout << iMin << " " << iMax;
	return 0;
}