#include<iostream>
using namespace std;
int main()
{
	int iNum, iAsc=0, iDes=0, iCmajor[8] = { 1,2,3,4,5,6,7,8 };
	for (int i = 0; i < 8; ++i)
	{
		cin.tie(NULL);
		cin >> iNum;
		if (iNum == iCmajor[i])
			++iAsc;
		if (iNum == iCmajor[7 - i])
			++iDes;
	}
	if (iAsc == 8)
		cout << "ascending";
	else if (iDes == 8)
		cout << "descending";
	else
		cout << "mixed";
	return 0;
}