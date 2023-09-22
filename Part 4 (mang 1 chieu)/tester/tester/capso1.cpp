#include <bits/stdc++.h>
using namespace std;
int num, req;
int doer (int a[])
{
    int kq = 0;
    for (int i = 0; i< num - 1; i++)
    {
        
        if (a[i] + a[i + 1] == req) kq++;
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
    system ("pause");
    return 0;
}