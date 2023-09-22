#include <bits/stdc++.h>
#define bignum string
using namespace std;
bool lonhon (bignum a, bignum b)
{
    while (a.size() > b.size()) b = '0' + b;
    while (b.size() > a.size()) a = '0' + a;
    if(a > b) return true;
    else return false;
}
bignum operator+(bignum a, bignum b)
{
    int carrier = 0;
    bignum kq = "";
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() > b.size())
        b = '0' + b;
    int length = a.size();
    for (int i = length - 1; i >= 0; i--)
    {
        int c = a[i] - 48 + b[i] - 48 + carrier;
        carrier = c / 10;
        kq = char(c % 10 + 48) + kq;
    }
    if (carrier)
        kq = '1' + kq;
    return kq;
}
bignum operator - (bignum a, bignum b)
{
    if(lonhon(a, b) == false) return '-' + (b - a);
    int carrier = 0;
    bignum kq = "";
    while (a.size() < b.size())
        a = '0' + a;
    while (a.size() > b.size())
        b = '0' + b;
    int length = a.size();
    for (int i = length - 1; i >= 0; i--)
    {
        int c = a[i] - 48 - b[i] + 48 - carrier;
        if (c < 0)
        {
            c += 10;
            carrier = 1;
        }
        else
            carrier = 0;
        kq = char(c % 10 + 48) + kq;
    }
    while (a[0] == '0') a.erase(0, 1);
    return kq;
}
int main()
{
    freopen("addin.inp", "r", stdin);
    freopen("addint.out", "w", stdout);
    bignum a, b, kq;
    cin >> a;
    cin >> b;
    if(a[0] == '-' && b[0] != '-')
    {
        a.erase (0, 1);
        kq = b - a;
    }
    else if(a[0] != '-' && b[0] == '-')
    {
        b.erase (0, 1);
        kq = a - b;
    }
    else if(a[0] == '-' && b[0] == '-')
    {
        a.erase(0, 1);
        b.erase(0, 1);
        kq = '-' + (a + b);
    }
    else kq = a + b;
    cout << kq;
    return 0;
}