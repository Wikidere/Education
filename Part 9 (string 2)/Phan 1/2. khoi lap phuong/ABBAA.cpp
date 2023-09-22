#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("abbaa.inp", "r", stdin);
    // freopen("abbaa.inp", "r", stdin);
    int n;
    cin >> n;
    while (n--)
    {
        string a;
        bool checker = true, UwU = true;
        cin >> a;
        if (a == "B")
        {
            cout << "NO" << endl;
            UwU = false;
            checker = false;
        }
        for (int i = 0; i <= a.size() - 1 && UwU;)
        {

            if (i >= a.size() - 1)
            {
                if (a[i] == 'B')
                {
                    cout << "NO" << endl;
                    checker = false;
                    break;
                }
                else
                    break;
            }
            else if (a[i] == 'A' && a[i + 1] == 'B')
                i += 2;
            else if (a[i] == 'B' && (a[i + 1] == 'A'))
                i += 2;
            else if (a[i] == 'A' && a[i + 1] == 'A')
            {
                i++;
            }
            else
            {
                cout << "NO" << endl;
                checker = false;
                break;
            }
        }
        if (checker)
            cout << "YES" << endl;
    }
    return 0;
}