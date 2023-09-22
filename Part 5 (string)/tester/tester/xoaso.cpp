#include <bits/stdc++.h>
using namespace std;
void doer (string a, char x)
{
    while(int(a.find(x)) != -1)
    {
        a.erase(int(a.find(x)), 1);
    }
    cout << a;
}
int main()
{
    string a;
    char x;
    cin >> x;
    cin.ignore();
    getline(cin, a);
    doer(a, x);
    return 0;
}