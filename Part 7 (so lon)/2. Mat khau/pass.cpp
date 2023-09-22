#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("pass.inp", "r", stdin);
    freopen("pass.out", "w", stdout);
    string a;
    int kq = 0;
    cin >> a;
    int length = a.size();
    for(int i = 0; i < length; i++)
    {
        kq = kq + int(a[i]) - 48;
    }
    cout << kq;
    return 0;
}