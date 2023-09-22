#include <bits/stdc++.h>
#define ll long long
const int base = 257;
const int MOD = (int)1e9 + 7;
const int maxn = (int)1e6 + 3;
using namespace std;
inline ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
string M, Y, S, L, T, Q, dig, X;
string ans;
string sub(string a, string b)
{
    string c = "";
    ll n1 = a.size(), n2 = b.size(), dig = 0, sum;
    if (n1 > n2)
        b.insert(0, n1 - n2, '0');
    for (int i = a.size() - 1; i >= 0; i--)
    {
        sum = (a[i] - 48) - (b[i] - 48) - dig;
        if (sum < 0)
        {
            sum += 10;
            dig = 1;
        }
        else
            dig = 0;
        c = char(sum + 48) + c;
    }
    while (c.length() > 1 && c[0] == '0')
        c.erase(0, 1);
    return c;
}
string add(string a, string b)
{
    string c = "";
    int n1 = a.size(), n2 = b.size(), l, carry = 0, sum;
    if (n1 < n2)
        l = n2;
    else
        l = n1;
    while (a.size() < l)
        a = '0' + a;
    while (b.size() < l)
        b = '0' + b;
    for (int i = l - 1; i >= 0; i--)
    {
        sum = (int)(a[i] - 48) + (int)(b[i] - 48) + carry;
        carry = sum / 10;
        c = char(sum % 10 + 48) + c;
    }
    if (carry > 0)
        c = '1' + c;
    return c;
}
string numbertostring(unsigned int n)
{
    stringstream ss;
    ss << n;
    return ss.str();
}
int main()
{

    cin >> M;
    ll l = 9 * M.size() + 1;
    for (int cnt = l; cnt >= 0; cnt--)
    {
        ans = "1";
        L = "0";
        Q = "0";
        S = sub(M, numbertostring(cnt));
        for (int q = 0; q < S.size(); q++)
        {
            T = S[q];
            L = add(L, T);
        }
        if (add(L, S) == M)
        {
            ans = S;
            break;
        }
    }
    if (ans != "1")
    {
        cout << ans << '\n';
    }
    else
        cout << -1 << '\n';
    system("pause");
    return 0;
}