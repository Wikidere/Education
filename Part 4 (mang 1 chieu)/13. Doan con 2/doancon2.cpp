#include <bits/stdc++.h>
using namespace std;
int n;
long long solve(long long a[])
{
    long long dem = 0, Max = 1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] * a[i - 1] < 0)
        {
            dem++;
            Max = max(Max, dem);
        }
        else
            dem = 1;
    }
    return Max;
}
int main()
{
    cin >> n;
    long long a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << solve(a);
    return 0;
}