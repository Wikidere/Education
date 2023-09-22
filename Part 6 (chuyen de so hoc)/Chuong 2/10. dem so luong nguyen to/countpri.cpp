#include <bits/stdc++.h>
using namespace std;
void sangnguyento(int a, vector <bool> &checker)
{
    int length = checker.size();
    checker.assign(checker.size(), true);
    checker[0] = false;
    checker[1] = false;
    for (int i = 2; i * i < length; i++)
    {
        if (checker[i] == true)
        {
            for (int j = i * i; j < length; j += i)
            {
                checker[j] = false;
            }
        }
    }
}
int main()
{
    int t, dem = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector <bool> checker(b + 1);
        sangnguyento(a, checker);
        for (int i = a; i <= b; i++)
        {
            if(checker[i] == true) dem++;
        }
        cout << dem << endl;
        dem = 0;
    }
    return 0;
}