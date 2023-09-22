#include <bits/stdc++.h>
using namespace std;
int reverser (int a)
{
    int UwU = 0;
    while (a > 0)
    {
        UwU = UwU * 10 + (a % 10);
        a /= 10;
    }
    return UwU;
}
bool doer (int a)
{
    int daonguoc = reverser(a);
    for (int i = 2; i * i <= a; i++)
    {
        if(a % i == 0 || daonguoc % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a;
    cin >> a;
    cout << doer(a);
    return 0;
}