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
    while (a.size() < b.size()) a = '0' + a;
    int carrier = 0;
    bignum kq = "";
    for(int i = a.size() - 1; i >= 0; i--)
    {
        int c = a[i] - b[i] - carrier;
        if(c < 0) 
        {
            c += 10; 
            carrier = 1;
        }
        else carrier = 0;
        kq = char(c % 10 + 48) + kq;
    }
    while (kq[0] == '0') kq.erase(0, 1);
    return kq;
}
bool lonhon (bignum a, bignum b)
{
    while (a.size() > b.size()) b = '0' + b;
    while (a.size() < b.size()) a = '0' + a;
    if (string(a) >= string(b)) return true;
    else return false;
}
int main()
{
    bignum n, a[100];
    a[0] = '1'; a[1] = '1';
    cin >> n;
    int i;
    for (i = 2; lonhon(n, a[i - 1]); i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (i -= 2; i >= 0; i--)
    {
        while (lonhon(n, a[i]) || n == a[i]) 
        {
            n = n - a[i];
            cout << a[i] << " ";
        }
    }
    return 0;
}