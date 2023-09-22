#include <bits/stdc++.h>
#define bignum string
using namespace std;
bignum operator + (bignum a, bignum b)
{
    bignum kq = "";
    int carry = 0;
    while (a.size() < b.size())
        a = '0' + a;
    while (a.size() > b.size())
        b = '0' + b;
    int length = a.size();
    for (int i = length - 1; i >= 0; i--)
    {
        int c;
        c = int(a[i]) - 48 + int(b[i]) - 48 + carry;
        carry = c / 10;
        c %= 10;
        kq = char(c + 48) + kq;
    }
    if (carry) kq = '1' + kq;
    return kq;
}
void fibonacci (int n)
{
    bignum a[n];
    a[0] = '1';
    a[1] = '1';
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2]; 
    }
    cout << a[n - 1];
}
int main()
{
    freopen("fibonaci.inp", "r", stdin);
    freopen("fibonaci.out", "w", stdout);
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}