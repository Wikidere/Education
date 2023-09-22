#include <bits/stdc++.h>
using namespace std;
vector <int> checker;
int doer (long long a, long long b)
{
    int kq = 1;
    int i, dem_a[100001] = { }, dem_b[100001] = { };
    for (i = 2; i <= max(a, b); i++)
    {
        while (a % i == 0)
        {
            dem_a[i]++;
            a /= i;
        }
        while (b % i == 0)
        {
            dem_b[i]++;
            b /= i;
        }
    }
    for(int j = 2; j <= i; j++)
    {
        kq = (dem_a[j] + dem_b[j] + 1) * kq;
    }
    return kq;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        cout << doer (a, b);
    }
    return 0;
}