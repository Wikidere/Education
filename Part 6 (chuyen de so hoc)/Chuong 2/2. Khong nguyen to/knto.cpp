#include <bits/stdc++.h>
using namespace std;
bool ngto (long long a)
{
    if(a < 2) return false;
    if(a == 2) return true;
    for (long long i = 2; i * i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int uoc_counter (long long n)
{
    int dem;
    int tru = 0;
    int kq = 1;
    for (long long i = 2; i <= n; i++)
    {
        if (ngto(i) == true && n % i == 0)
            {
                tru++;
            }
        dem = 0;
        while (n % i == 0)
        {
            ++dem;
            n /= i;
        }
        if (dem)
        {
            if (dem >= 1)
                kq = kq * (dem + 1);
        }
    }
    kq -= tru;
    return kq;
}
int main()
{
    long long a;
    cin >> a;
    cout << uoc_counter(a);
    return 0;
}