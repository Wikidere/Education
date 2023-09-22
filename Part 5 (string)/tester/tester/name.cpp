#include <bits/stdc++.h>
using namespace std;
void doer(string a)
{
    int first = 0, last = a.size();
    while (a[first] == ' ')
    {
        first++;
    }
    while (a[last] == ' ')
    {
        last--;
    }
    if (a[a.size() - 1] == ' ')
        last--;
    if ('a' <= a[0] && a[0] <= 'z')
        a[0] -= 32;
    for (int i = 1; i < a.size(); i++)
    {
        if ('A' <= a[i] && a[i] <= 'Z')
            a[i] += 32;
        if (a[i - 1] == ' ' && 'a' <= a[i] && a[i] <= 'z')
        {
            a[i] -= 32;
        }
    }
    for(int i = first; i < last; i++)
    {
        if(a[i] == ' ' && a[i + 1] == a[i] && i < last)
        {
            continue;
        }
        cout << a[i];
    }
}
int main()
{
    string a;
    getline(cin, a);
    doer (a);
    return 0;
}