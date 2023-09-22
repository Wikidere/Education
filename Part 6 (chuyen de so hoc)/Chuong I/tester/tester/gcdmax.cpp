#include <bits/stdc++.h>
using namespace std;
int num;
int UCLN(int a, int b)
{
    {
        if (b == 0)
            return a;
        return UCLN(b, a % b);
    }
}
void doer (int a)
{
    int Max = 0;
    vector <int> kq;
    for(int i = 1; i <= a - 1; i++)
    {
        for(int j = i + 1; j <= a; j++)
        {
            kq.push_back(UCLN(i, j));
        }
    }
    for(int i = 0; i < kq.size(); i++)
    {
        if(Max < kq[i])
        {
            Max = kq[i];
        }
    }
    cout << Max << endl;
}
int main()
{
    cin >> num;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < num; i++)
    {
        doer (a[i]);
    }
    system("pause");
    return 0;
}