#include <bits/stdc++.h>
using namespace std;
int num;
int doer(int a[])
{
    vector <int> indicator;
    indicator.assign(1,0);
    int kq = 0, result = 0;
    for (int i = 0; i < num - 1; i++)
    {
        if (a[i] < a[i + 1]) 
        {
            kq++;
        }
        else if(a[i] >= a[i + 1])
        {
            indicator.push_back(kq);
            kq = 0;
        }
        indicator.push_back(kq);
    }
    for (int i = 0; i < indicator.size(); i++)
    {
        result = result < indicator[i] ? indicator[i] : result;
    }
    return result + 1;
}
int main()
{
    cin >> num;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    cout << doer (a);
    return 0;
}