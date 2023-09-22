#include <bits/stdc++.h>
using namespace std;
int doer(int a, int b)
{
    {
        if (b == 0)
            return a;
        return doer(b, a % b);
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    int kq = doer(a, b);
    cout << kq << endl
         << a / kq << " " << b / kq;
    return 0;
}