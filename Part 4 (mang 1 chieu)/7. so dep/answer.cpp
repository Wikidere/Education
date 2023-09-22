#include <bits/stdc++.h>
using namespace std;
int num;
bool detector(int a)
{
    bool kq = true;
    int UwU;
    while (a != 0)
    {
        if (a % 10 == 6 || a % 10 == 8)
            kq = true;
        else if (a % 10 != 6 || a % 10 != 8)
        {
            kq = false;
            break;
        }
        a /= 10;
    }
    return kq;
}
int main()
{
    int dem;
    cin >> num;
    int a[num];
    for (int i=0; i< num; i++ )
        cin>> a[i];
    for (int i=0; i< num; i++ )
        if (detector(a[i]) == true) dem ++;
    cout<< dem;
    return 0;
}
