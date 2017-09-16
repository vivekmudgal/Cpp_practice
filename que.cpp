#include <bits/stdc++.h>

using namespace std;

int main()
{
	double sum = 0;
	int a = 1;

	for (int i = 0; i < 100; ++i)
	{
		/* code */
		sum = sum + double(a);
		a = sqrt(4+3*a+a*a) - 2;
	}

	cout << sum;

	return 0;
}