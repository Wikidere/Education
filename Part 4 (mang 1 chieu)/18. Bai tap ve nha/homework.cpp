#include <bits/stdc++.h>
using namespace std;
int num, s;
int helper(int a[])
{
    int pos, arr;
    for (int i = 1; i < num; i++)
    {
        arr = a[i];
        pos = i;
        while (pos > 0 && arr < a[pos - 1])
        {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = arr;
    }
    int counter = 0;
    for (int j = 0; j < num; j++)
    {
        if (a[j] <= s)
        {
            counter++;
            s = s + a[j];
        }
        else break;
    }
    return counter;
}

int main()
{
    cin >> num >> s;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    cout << helper(a);
    system ("pause");
}