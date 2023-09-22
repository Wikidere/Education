#include <bits/stdc++.h>
using namespace std;
int num;
bool detector(int a)
{
    bool kq = false;
    if (a == 0 || a == 1)
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
int songuyento(int a[])
{
    int counter = 0;
    for (int i = 0; i < num; i++)
    {
        if (detector(a[i]) == false)
        {
            counter++;
        }
    }
    return counter;
}
int tong(int a[])
{
    int kq = 0;
    for (int i = 0; i < num; i++)
    {
        if (detector(a[i]) == false)
        {
            kq += a[i];
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
    cout << songuyento(a) << " " << tong(a);
    system("pause");
}