#include <bits/stdc++.h>
using namespace std;
void doer(string a)
{
    int chuong[123] = { };
    for (int i = 0; i < a.size(); i++)
    {
        if('A' <= a[i] && a[i]<= 'Z')
        {
            chuong[int(a[i] + 32)]++;
        }
        else if('0' <= a[i] && a[i] <= '9')
        {
            chuong[int(a[i])]++;
        }
        else if('a' <= a[i] && a[i] <= 'z')
        {
            chuong[int(a[i])]++;
        }
    }
    int j = 47;
    while(j < 122)
    {
        if (chuong[j + 1] >= 1)
        {
            cout << char(j + 1) << " " << chuong[j + 1] << endl;
        }
        j++;
    }
}
int main()
{
    freopen("char.inp", "r", stdin);
    freopen("char.out", "w", stdout);
    string a;
    getline(cin, a);
    doer(a);
    return 0;
}