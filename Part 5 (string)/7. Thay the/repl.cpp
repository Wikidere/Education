#include <bits/stdc++.h>
using namespace std;
void doer (string a, string a1, string a2)
{
    while (int(a.find(a1)) != -1)
    {
        int find = a.find(a1);
        a.erase(find, a1.size());
        a.insert(find, a2);
    }
    cout << a;
}
int main()
{
    string a, a1, a2;
    getline(cin, a1);
    getline(cin, a2);
    getline (cin, a);
    doer (a, a1, a2);
    system("pause");
    return 0;
}