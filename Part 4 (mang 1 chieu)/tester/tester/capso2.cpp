#include <bits/stdc++.h>
using namespace std;
int num, req;
int doer (int a[])
{
    int kq = 0;
    for (int i = 0; i< num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (a[i] + a[j] == req) kq++;
        }
    }
    return kq;
}
int main()
{
    cin >> num;
    int a[num];
    cin >> req;
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    cout << doer(a);
    return 0;
}