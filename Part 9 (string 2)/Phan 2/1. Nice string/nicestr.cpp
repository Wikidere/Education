#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen ("nicestr.inp", "r", stdin);
    freopen ("nicestr.out", "w", stdout);
    int n;
    while (n--)
    {
        string s;
        cin >> s;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'a') a++;
            else b++;
        }
    cout << (a == b ? 2 : 1) << endl;
    }
    return 0;
}