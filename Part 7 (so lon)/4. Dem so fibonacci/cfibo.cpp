#include <bits/stdc++.h>
#define bignum string
using namespace std;
bignum operator + (bignum a, bignum b)
{
    int carrier = 0;
    bignum kq = "";
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() > a.size()) b = '0' + b;
    int length = a.size();
    for (int i = length - 1; i >= 0; i--)
    {
        int c = int(a[i]) - 48 + int(b[i]) - 48 + carrier;
        carrier = c / 10;
        kq = char(c % 10 + 48) + kq;
    }
    if (carrier) kq = '1' + kq;
    return kq;
}
bool lonhonbang (bignum a, bignum b)
{
    while (a.size() > b.size()) b = '0' + b;
    while (a.size() < b.size()) a = '0' + a;
    int length = a.size();
    if(a >= b) return 1;
    else return 0;
}
bool lonhon (bignum a, bignum b)
{
    while (a.size() > b.size()) b = '0' + b;
    while (a.size() < b.size()) a = '0' + a;
    int length = a.size();
    if(a > b) return 1;
    else return 0;
}
int main()
{
    freopen("cfibo.inp", "r", stdin);
    freopen("cfibo.out", "w", stdout);
    int kq;
    bignum m, n;
    cin >> m >> n;
    vector <bignum> a;
    a.push_back("1");
    a.push_back("1");
    for (int i = 0; ;i++)
    {
        if(i >= 2)
        {
            a.push_back(a[i - 1] + a[i - 2]);
        }
        if (lonhonbang(a[i], m) && lonhonbang(n, a[i])) kq++;
        if (lonhon(a[i], n)) break;
    }
    cout << kq;
    return 0;
}
