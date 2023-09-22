#include <bits/stdc++.h>
#define N 100000
using namespace std;
int p1[N * 10 + 2], p2[N * 10 + 2], a[N + 2];
int n, k, ans;
void sangnt()
{
    fill(p1 + 2, p1 + N * 10 + 1, 1);
    fill(p2 + 2, p2 + N * 10 + 1, 1);
    for (int i = 2; i * i <= N * 10; i++)
        if (p1[i] == 1)
            for (int j = i * i; j <= N * 10; j += i)
                p1[j] = p2[j] = 0;
}
int main()
{
    sangnt();
    freopen("tprime.inp", "r", stdin);
    freopen("tprime.out", "w", stdout);
    p1[10 * N] = 1000003;
    for (int i = 10 * N - 1; i > 0; i--)
        if (p1[i] == 1)
            p1[i] = i;
        else
            p1[i] = p1[i + 1];
    p2[1] = -int(1e9);
    for (int i = 2; i <= 10 * N; i++)
        if (p2[i] == 1)
            p2[i] = i;
        else
            p2[i] = p2[i - 1];

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int s = 0;
    for (int i = 1; i <= k; i++)
        s += min(p1[a[i]] - a[i], a[i] - p2[a[i]]);
    ans = s;
    for (int i = k + 1; i <= n; i++)
    {
        s -= min(p1[a[i - k]] - a[i - k], a[i - k] - p2[a[i - k]]);
        s += min(p1[a[i]] - a[i], a[i] - p2[a[i]]);
        ans = min(ans, s);
    }
    cout << ans;
    return 0;
}