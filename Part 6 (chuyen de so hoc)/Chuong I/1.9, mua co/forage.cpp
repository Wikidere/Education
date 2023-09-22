#include <bits/stdc++.h>
using namespace std;
void doer (int p, int n, int k)
{
    int req = 0;
    for(int i = 1; i <= n; i++)
    {
        req = req + k * i;
    }
    if(req > p)
    {
        cout << "NO: " << req << endl << req - p;
        return;
    }
    cout << "YES";
}
int main()
{
    int p, n, k;
    cin >> p >> n >> k;
    doer(p, n, k);
    system("pause");
}
