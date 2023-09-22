#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("dance.inp", "r", stdin);
    //freopen("dande.out", "w", stdout);
    int n;
    cin >> n;
    string a;
    cin >> a;
    a = " " + a;
    int c[100001];
    long long res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 'a') c[i] = 1;
        else c[i] = -1;
    }
    int d[100001] = {};

    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + c[i];
    }
    long long chuong[200001] = {};
    for (int i = 0; i <= n; i++)
    {
        chuong[d[i] + 100000]++;
    }
    for (int i = 0; i < 200001; i++)
    {
       res += (chuong[i]) * (chuong[i] - 1) / 2;
    }
    cout << res;
    system("pause");
    return 0;
}