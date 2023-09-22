#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("strdel.inp", "r", stdin);
    freopen("strdel.out", "w", stdout);
    int n;
    cin >> n;
    while (n--)
    {
        bool checker = false;
        string s;
        cin >> s;
        int res = 0;
        int l = s.size();
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'A')
            {                
                l--;
            }
            else break;
        }
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'A') res++;
            else res--;
        }
        if (res < 0)
        {
            res = abs(res) % 2;
        }
        cout << res + s.size() - l;
    }
    return 0;
}