#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen ("antipalindrome.inp", "r", stdin);
    freopen ("antipalindrome.out", "w", stdout);
    string checker1 = "abc", checker2 = "acb", checker3 = "bac", checker4 = "bca", checker5 = "cab", checker6 = "cba";
    int n, req;
    cin >> n >> req;
    string a;
    cin >> a;
    cin.ignore();
    while (n--)
    {
        int l, r, kq1 = 0, kq2 = 0, kq3 = 0, kq4 = 0, kq5 = 0, kq6 = 0;
        cin >> l >> r;
        string temp = a.substr(l - 1, r - l + 1);
        if (temp.size() == 2 && temp[0] == temp[1])
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 0; i < temp.size(); i++)
            {
                if (a[i] != checker1[i % 3])
                    kq1++;
                if (a[i] != checker2[i % 3])
                    kq2++;
                if (a[i] != checker3[i % 3])
                    kq3++;
                if (a[i] != checker4[i % 3])
                    kq4++;
                if (a[i] != checker5[i % 3])
                    kq5++;
                if (a[i] != checker6[i % 3])
                    kq6++;
            }
            int res = min(kq1, min(kq2, min(kq3, min(kq4, min(kq5, kq6)))));
            cout << res << endl;
        }
    }
    return 0;
}