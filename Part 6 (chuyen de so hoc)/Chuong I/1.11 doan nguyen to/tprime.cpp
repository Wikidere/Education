#include <bits/stdc++.h>
#define N 1000
#define M int(1e6) + 3
using namespace std;
bool ngto[M];
int dayso[N] = {};
void sangngto()
{
    int z = 0;
    fill(ngto + 2, ngto + M, true);
    for (int i = 2; i <= M; i++)
        if (ngto[i])
        {
            for (int j = i + i; j <= M; j += i)
                ngto[j] = false;
            dayso[z++] = i;
        }
}

int main()
{
    freopen("tprime.inp", "r", stdin);
    freopen("tprime.out", "w", stdout);
    sangngto();
    int n, k, a[N] = {}, b[N] = {}, c[N] = {};
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int temp = lower_bound(dayso, dayso + N, a[i]) - dayso;
        if (dayso[temp] !=  a[i])
            b[i] = dayso[temp] - a[i] < a[i] - dayso[temp - 1] ? dayso[temp] - a[i] : a[i] - dayso[temp - 1];
    }
    for (int i = 1; i <= n; i++)
        c[i] = c[i - 1] + b[i-1];
    int res = INT_MAX;
    for (int i = 0; i <= n - k; i++)
        res = min(res, c[i + k] - c[i]);
    cout << res;
}