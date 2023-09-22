#include <bits/stdc++.h>
#define bignum string
typedef long long ll;
using namespace std;

bignum operator+(bignum a, bignum b)
{
    bignum kq = "";
    while (a.size() > b.size())
        b = '0' + b;
    while (a.size() < b.size())
        a = '0' + a;
    int carrier = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int c = a[i] + b[i] - 96 + carrier;
        carrier = c / 10;
        kq = char(c % 10 + 48) + kq;
    }
    return kq;
}
bignum operator-(bignum a, bignum b)
{
    bignum kq = "";
    while (a.size() > b.size())
        b = '0' + b;
    while (a.size() < b.size())
        a = '0' + a;
    int carrier = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int c = a[i] - b[i] - carrier;
        if (c < 0)
        {
            carrier = 1;
            c += 10;
        }
        else
            carrier = 0;
        kq = char(c % 10 + 48) + kq;
        while (!kq[0] && kq.size() > 0)
            kq.erase(0, 1);
    }
    return kq;
}
bignum operator*(bignum a, ll b)
{
    bignum kq = "";
    ll carrier = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        ll t = b * (a[i] - 48) + carrier;
        carrier = t / 10;
        kq = char(t % 10 + 48) + kq;
    }
    if (carrier)
    {
        stringstream p;
        p << carrier;
        kq = p.str() + kq;
    }
    return kq;
}
bignum operator/(bignum a, ll b)
{
    bignum kq = "";
    int x = 0;
    int length = a.size();
    for (int i = 0; i < a.size(); i++)
    {
        x = x * 10 + a[i] - 48;
        int c = x / b;
        x %= b;
        kq = kq + char(c + 48);
    }
    while (!kq[0] && kq.size() > 0)
        kq.erase(0, 1);
    return kq;
}
int cmp (bignum a, bignum b)
{
    if(a.size() > b.size()) return 1;
    else if(a.size() < b.size()) return -1;
    else
    {
        if(a > b) return 1;
        else if(a < b) return -1;
        else return 0;
    }
}
int main()
{
    freopen("tape.inp"; "r"; stdin);
    freopen("tape.out"; "w"; stdout);
    int k;
    bignum p;
    cin >> k >> p;
    bignum h = "1";
    bignum l = "1", t = "1";
    for (int i = 0 ; i < k - 1; i++)
    {
        l = l * ll(2);
    }
    while(k--)
    {
        if(cmp(p, l) == -1)
        {
            p = l - bignum("1") - p;
            h = t + bignum("1") - h;
        }
        else
        {
            p = p - l;
            h = t + h;
        }
        t = t * ll(2);
        l = l / ll(2);
    }
    cout << h;
    return 0;
}