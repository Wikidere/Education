#include <bits/stdc++.h>
#define bigNum string
using namespace std;
bigNum n,m,res="";
int cmp(bigNum a, bigNum b)
{
    while (a.size() < b.size()) a = '0' + a;
    while (a.size() > b.size()) b = '0' + b;
    if (a > b) return 1;
    if (a == b) return 0;
    return -1;
}
bigNum operator - (bigNum a, bigNum b)
{
    while (a.size() > b.size()) b = '0' + b;
    bigNum c = "";
    int carry = 0;
    for (int i=a.size()-1; i>=0; i--)
    {
        int t = (a[i] - '0') - (b[i] - '0') - carry;
        if (t < 0)
        {
            t += 10;
            carry = 1;
        }
        else carry = 0;
        c = char(t + '0') + c;
    }
    while (c[0] == '0') c.erase(0,1);
    return c;
}

int sumdigit(bigNum x)
{
    int sum = 0;
    for (int i=0; i<x.size();i++)
        sum += x[i] - '0';
    return sum;
}
int main()
{
    for (int i=1; i<=100; i++) res += '9';
    cin >> m;
    bool ok = false;
    for (int i=1;i<=900; i++)
    {
        stringstream isnum;
        isnum << i;
        bigNum tmp = isnum.str();
        if (cmp(tmp,m) == 1) break;
        n = m - tmp;
        if (sumdigit(n) == i)
            if (cmp(res,n) == 1)
            {
                res = n;
                ok = true;
            }
    }
    if (!ok) cout << 0;
    else cout << res;
    system("pause");
    return 0;
}
