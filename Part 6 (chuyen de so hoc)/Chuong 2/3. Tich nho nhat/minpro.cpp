#include <bits/stdc++.h>
#define ll long long
#define inf INT_MAX
using namespace std;

ll tinh(ll a, ll b, ll x, ll y, ll n)
{
    if (a - x + b - y < n)
        return x*y;
    if (a - x >= n)
        return (a-n)*b;
    b = b - (n - (a - x));
    a = x;
    return (a*b);
}
int main()
{
    freopen("minpro.inp","r",stdin);
    freopen("minpro.out","w",stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll res = inf;
        ll a,b,x,y,n;
        cin >> a >> b >> x >> y >> n;
        res = min(res,tinh(a,b,x,y,n));
        res = min(res,tinh(b,a,y,x,n));
        cout << res << '\n';
    }
    return 0;
}