#include <bits/stdc++.h>
using namespace std;
void doer(int a)
{
    int num = 0;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            num++;
        }
        if (num > 1)
            {
                cout << "NO" << endl; 
                return;
            }
    }
    if (num == 0)
    {
        cout << "NO" << endl;
        return;
    }
    else
        cout << "YES" << endl;
}
int main()
{
    int num;
    cin >> num;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < num; i++)
    {
        doer(a[i]);
    }
    return 0;
}