#include <bits/stdc++.h>
using namespace std;
int num;
bool detector(int a)
{
    bool kq = false;
    if (a < 0)
    {
        kq = true;
    }
    else if (a == 0 || a == 1)
    {
        kq = true;
    }
    else if (a == 2)
    {
        kq == false;
    }
    else
    {
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                kq = true;
                break;
            }
        }
    }
    return kq;
}
int doer (int a[])
{
    int kq = 0;
    for (int i = 0; i< num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (detector (a[i] + a[j]) == false) 
            {
                kq++;
            }
        }
    }
    return kq;
}
int main()
{
    cin >> num;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    cout << doer(a);
    system ("pause");
    return 0;
}