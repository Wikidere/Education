#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("clumsy.inp", "r", stdin);
    freopen("clumsy.out", "w", stdout);
    int temp = 0, res = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            temp++;
        else if (s[i] == ')')
            temp--;
        if (temp < 0)
        {
            temp = 1;
            res++;
        }
    }
    cout << res + temp / 2;
    return 0;
}