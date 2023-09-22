#include <bits/stdc++.h>
using namespace std;
void doer(int y, int k, int n)
{
    vector <int> kq;
    for (int i = 1; i + y <= n; i++)
    {
        if ((y + i) % k == 0)
        {
            kq.push_back(i);
        }
    }
    int num = kq.size();
    if(num == 0)
    {
        cout << -1;
        return;
    }
    for(int i = 0; i < num; i++)
    {
        cout << kq[i] << " ";
    }
}
int main()
{
    int y, k, n;
    cin >> y >> k >> n;
    doer (y, k, n);
    system("pause");
    return 0;
}