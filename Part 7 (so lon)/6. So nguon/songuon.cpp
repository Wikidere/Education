#include <bits/stdc++.h>
#define bignum string
using namespace std;
bignum operator + (bignum a, bignum b)
{
    while (a.size() > b.size()) b = '0' + b;
    while (a.size() < b.size()) a = '0' + a;
    int carrier = 0;
    bignum kq = "";
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int c = a[i] - 48 + b[i] - 48 + carrier;
        carrier = c / 10;
        kq = char(c % 10 + 48) + kq;
    }
    if (carrier) kq = '1' + kq;
    return kq;
}
bignum operator - (bignum a, bignum b)
{
    while (a.size() > b.size()) b = '0' + b;
    while (b.size() > a.size()) a = '0' + a;
    bignum kq = "";
    int carrier = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int c = a[i] - b[i] - carrier;
        if (c < 0) 
        {
            c += 10;
            carrier = 1;
        }
        else carrier = 0;
        kq = char(c % 10 + 48) + kq;
    }
    while (kq[0] == '0') kq.erase (0, 1);
    return kq;
}
int counter (bignum a)
{
    int kq = 0;
    int length = a.size();
    for (int i = 0; i < length; i++)
    {
        kq = kq + a[i] - 48;
    }
    return kq;
}
int main()
{
    bignum kq = "-1";
    bignum m;
    cin >> m;
    for (int i = 1; i <= 900 ; i++)
    {
        stringstream p;
        p << i;
        bignum temp = p.str();
        if (i == counter(m - temp))
        {
            kq = m - temp;
        }
    }
    cout << kq;
    return 0;
}