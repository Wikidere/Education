#include <bits/stdc++.h>
using namespace std;
void doer (string a)
{
    bool kq = true;
    int UwU = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == ' ' && kq == true)
        {
            cout << i << " ";
            kq = false;
        }
        if (a[i] == ' ')
        {
            UwU = i;
        }
    }
    cout << UwU;
}
int main()
{
    string S;
    getline (cin, S);
    doer(S);
    return 0;
}