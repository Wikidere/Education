#include <bits/stdc++.h>
using namespace std;
int n;
float tong(float a[])
{
    float kq = 0;
    for (int i = 0; i < n; i++)
    {
        kq = a[i] + kq;
    }
    return kq;
}
float tongsoam(float a[])
{
    float kq = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            kq = kq + a[i];
        }
    }
    return kq;
}
float tongsoduong(float a[])
{
    float kq = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            kq = kq + a[i];
        }
    }
    return kq;
}
float tongsovitrile(float a[])
{
    float kq = 0;
    for (int i = 0; i < n; i = i + 2)
    {
        kq = kq + a[i];
    }
    return kq;
}
float tongsovitrichan(float a[])
{
    float kq = 0;
    for (int i = 1; i < n; i = i + 2)
    {
        kq = kq + a[i];
    }
    return kq;
}
int main()
{
    cin >> n;
    float x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    cout << setprecision(2) << fixed;
    cout << tong(x) << " " << tongsoam(x) << " "  << tongsoduong(x) << " " << tongsovitrichan(x) << " " << tongsovitrile(x);
    return 0;
}