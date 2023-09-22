#include <bits/stdc++.h>
using namespace std;
#define N 100000
#define M 1000003
bool check[M] = {};
int ngto[N] = {};
void sangngto()
{
    fill (check + 2, check + M, true);
    for (int i = 0; i <= M; i++)
        if (check[i])
            for (int j = i + i; j <= M; j += i)
                check[j] = false;
}
int main()
{
    int m, n, a[N][N] = {}, b[N][N] = {};
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int temp;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            temp = lower_bound(ngto, ngto + N, a[i][j]) - ngto;
            if (ngto[temp] != a[i][j])
                b[i][j] = min(ngto[temp] - a[i][j], a[j][j] - ngto[temp - 1]);
        }
    int res = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
            sum += b[i][j];
        res = min(res, sum);
    }
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
            sum += b[i][j];
        res = min(res, sum);
    }
    cout << res;
}
