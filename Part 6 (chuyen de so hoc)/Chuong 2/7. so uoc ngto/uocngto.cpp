#include <bits/stdc++.h>
using namespace std;
bool checker(int a)
{
    if (a < 2) return false;
    if (a == 2) return true;
    for (int i = 2; i * i <= a; i++)
    {
        if(a % i == 0) return false;
    }
    return true;
}
int counter(int a)
{
    int dem = 0, kq = 1;
    for (int i = 2; i <= a; i++)
    {
        while (a % i == 0)
        {
            dem++;
            a /= i;
        }
        kq *= (dem + 1);
        dem = 0;
    }
    return kq;
}
int main()
{
    int n, kq;
    cin >> n;
    while (n--)
    {
        kq = 0;
        int i, j;
        cin >> i >> j;
        for(int g = i; g <= j; g++)
        {
            if(checker(counter(g)) == true)
            {
                kq++;
            }
        }
        cout << kq;
    }

    return 0;
}