#include <bits/stdc++.h>
using namespace std;
bool checker(int a)
{
    if (a == 2) return true;
    else if (a < 2) return false;
    else
    {
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0) return false;
    }
    return true;
    }
}
bool doer (int a)
{
    if(a > 0)
    {
    if (checker(a) != true) return false;
    else return doer(a / 10);
    }
    return true;
}
int main()
{
    int num, last;
    cin >> num >> last;
    if (last > 7393933) last = 7393933;
    bool kq = false;
    for (int i = num; i <= last; i++)
    {
        if(doer(i) == true) 
        {
            cout << i << endl;
            kq = true;
        }
    }
    if (kq == false) cout << "NO";
    return 0;
}