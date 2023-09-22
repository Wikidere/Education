#include <bits/stdc++.h>
using namespace std;
int n;
float Min(float x[])
{
    float kq = x[0];
    for (int i = 0; i < n; i++)
    {
        kq = min(x[i], kq);
    }
    return kq;
}
float Max(float x[])
{
    float kq = 0;
    for (int i = 0; i < n; i++)
    {
        kq = max(kq, x[i]);
    }
    return kq;
}
int main()
{
    cin >> n;
    float a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << setprecision(2) << fixed;
    cout << Max(a) << " " << Min(a);
    return 0;
}