#include <iostream>
#include <cstdio>
#include <cmath>
#define fi "SOLVE.INP"
#define fo "SOLVE.OUT"
using namespace std;

long long n, x, xmin, res;
long long s(long long x)
{
	long long sum;
	sum = 0;
	while (x != 0)
	{
		sum += x % 10;
		x = x / 10;
	}
	return sum;
}

int main()
{
	freopen(fi, "r", stdin);
	freopen(fo, "w", stdout);
	cin >> n;
	res = -1;
	xmin = (long long)(1E18);
	for (long long p = 1; p <= 90; p++)
	{
		x = (long long)((-p + (long long)sqrt(p * p + 4 * n)) / 2);
		if (x * x + s(x) * x - n == 0 && x < xmin)
		{
			xmin = x;
			res = xmin;
		}
	}
	cout << res << "\n";
	system("pause");
	return 0;
}
