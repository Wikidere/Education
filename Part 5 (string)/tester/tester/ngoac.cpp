#include <bits/stdc++.h>
using namespace std;
void doer(string a)
{
    int kq = 0;
    for(int i = 0; i < a.size(); i++)
    {
        switch (a[i])
        {
        case '(':
        kq++;
        break;
        case ')':
        kq--;
        break;
        default:
        {
            cout << "KHONG HOP LE";
            return;
        }
        };
        if(kq == -1)
        {
            cout << "KHONG DUNG";
            break;
            return;
        }
    }
    if(kq == 0)
    {
        cout << "DUNG";
    }
    else if(kq > 0)
    {
        cout << "KHONG DUNG";
    }
}
int main()
{
    string a;
    getline(cin, a);
    doer (a);
    return 0;
}