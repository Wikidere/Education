#include <bits/stdc++.h>
using namespace std;
string UwU;
string doer (string a)
{
    string kq;
    for (int i = 0; i < a.size(); i++)
    {
        kq.insert(0, a.substr(i,1));
    }
    return kq;
}
int main()
{
    getline(cin, UwU);
    cout << doer (UwU);

    return 0;
}