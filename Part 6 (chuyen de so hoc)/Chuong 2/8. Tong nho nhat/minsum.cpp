#include <bits/stdc++.h>
using namespace std;
long long tich, bcnn, ucln;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}// nó là ước chung lớn nhất. Muốn dùng cái còn lại thì dùng lcm.
int main()
{
    long long kq = INT_MAX;
    bool checker = false;
    cin >> ucln >> bcnn;
    tich = ucln * bcnn;
    // tích của ucln & bcnn là tích của 2 số a, b cần tìm!
    for (int i = 2; i * i < tich; i += ucln)
    {
        if (tich % i == 0 && gcd(i, tich / i) == ucln)
        {
            kq = min(tich / i + i, kq);
            checker = true;
        }
    }
    if (checker == false) 
    {
        cout << -1;
        return 0;
    }
    cout << kq;
    return 0;
}