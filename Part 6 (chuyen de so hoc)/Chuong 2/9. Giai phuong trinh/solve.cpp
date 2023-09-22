#include <bits/stdc++.h>
using namespace std;
unsigned long long n;
int counter(int a)
{
    int kq = 0;
    while (a != 0)
    {
        kq += a % 10;
        a /= 10;
    }
    return kq;
}
int main()
{
    unsigned long long kq = INT_MAX;
    unsigned long long s, x;
    cin >> n;
    for (unsigned long long i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            s = i > n / i ? i - n / i : n / i - i;
            x = min(i, n / i);
            if (counter(x) == s)
            {
                kq = min(kq, x);
            }
        }
    }
    if (kq == INT_MAX)
    {
        cout << -1;
        return 0;
    }
    cout << kq;
    return 0;
}