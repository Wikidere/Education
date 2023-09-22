#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ad.inp", "r", stdin);
    freopen("ad.out", "w", stdout);
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if((int)b.find(a[i]) != -1)
        {
            b.erase(b.find(a[i]), 1);
            a.erase(i, 1); 
            i--;
        }
        // abc abcd
    }
    cout << a.size() + b.size();
    return 0;
}