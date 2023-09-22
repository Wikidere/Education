#include <bits/stdc++.h>
using namespace std;
void sangngto(long long N, vector<bool> &a)
{
    a[1] = false;
    a[0] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (a[i] == true)
        {
            for (int j = i * i; j <= N; j += i)
            {
                a[j] = false;
            }
        }
    }
}
int main()
{
    long long n;
    cin >> n;
    vector<bool> a(n + 1, true);
    bool kq = false;
    sangngto(n, a);
    for (int i = 0; i * i < n; i++)
    {
        if (a[i] == true)
        {
            for (int j = i + 1; j * j + i * i <= n; j++)
            {
                if (a[j] == true)
                {
                    if (a[i * i + j * j] == true)
                    {
                        cout << i << " " << j << " " << i * i + j * j << endl;
                        kq = true;
                    }
                }
            }
        }
    }
    if (kq == false) cout << -1;
    return 0;
}