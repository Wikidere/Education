#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen ("subtr.inp", "r", stdin);
    freopen ("subtr.out", "w", stdout);
    int kq = 0, k, num[1000000] = { }, j = 0;
    string s;
    fill (num, num + 1000000, 1);
    cin >> k >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '1')
        {
            num[j]++;
        }
        else
        {
            j++;
        }
    }
    for (int i = 0; i < j - k + 1; i++)
    {
        kq += num[i] * num[i + k];
    }
    cout << kq;
    return 0;
}