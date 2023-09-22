#include <bits/stdc++.h>
using namespace std;
int num;
int UCLN(int a, int b)
{
    {
        while (b > 0)
        {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
}
void doer(int a)
{
    int Max = 0;
    for (int i = 1; i <= a - 1; i++)
    {
        for (int j = i + 1; j <= a; j++)
        {
            Max = max(Max, UCLN(i, j));
        }
    }
    cout << Max << endl;
}
int main()
{
    int a;
    cin >> num;
    while (num--)
    {
        cin >> a;
        doer(a);
    }
    return 0;
}
