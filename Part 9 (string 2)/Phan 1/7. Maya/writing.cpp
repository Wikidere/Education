#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("writing.inp", "r", stdin);
    freopen("writing.out", "w", stdout);
    int n1, n2, chuong[122] = { }, chuong_[122] = { }, res = 0;
    cin >> n1 >> n2;
    string req, s;
    cin >> req;
    cin.ignore();
    cin >> s;
    for (int i = 0; i < n1; i++)
    {
        chuong[req[i]]++;
    }

    for (int i = 0; i < n1; i++)
    {
        chuong_[s[i]]++;
    }
    bool checker = true;
    for (int i = 0; i < 122; i++)
    {
        if (chuong[i] != chuong_[i])
        {
            checker = false;
            break;
        }
    }
    if (checker)
    {
        res++;
    }
    
    for (int i = n1; i < n2; i++)
    {
        checker = true;
        chuong_[s[i]]++;
        chuong_[s[i - n1] ]--;
        for (int j = 0; j < 122; j++)
        if (chuong[j] != chuong_[j])
        {
            checker = false;
            break;
        }
        if (checker)
            res++;
    }
    cout << res;
    return 0;
}