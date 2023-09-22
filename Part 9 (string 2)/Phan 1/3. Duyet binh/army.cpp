#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen ("army.inp", "r", stdin);
    //freopen ("army.out", "w", stdout);
    int size, l = 0;
    string s;
    cin >> size >> s;
    for (; l < size; l++)
    {
        if (s[l] == '>') break;
    }
    int r;
    for (r = size; r >= 0; r--)
    {
        if (s[r] == '<') break;
    }
    int t1 = 0, t2 = 0;
    for (int i = l; i < r; i++)
    {
        if (s[i] == '>')
        {
            t1++;
            t2--;
            t2 = max(0, t2);
        }
        else t2++;
    }
    cout << t1 + t2;
    return 0;
}