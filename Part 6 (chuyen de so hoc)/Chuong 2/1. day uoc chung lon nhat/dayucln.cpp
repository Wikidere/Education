#include <bits/stdc++.h>
using namespace std;
#define N 1001

int s[N]; 
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
void doer(int a[], int num)
{
    cout << a[0] << " ";
    for (int i = 0; i < num - 1; i++)
    {
        cout << lcm(a[i], a[i + 1]) <<  " ";
    }
    cout << a[num - 1] << " " << endl;
}
int main()
{
    int cases;
    int num;
    cin >> cases;
    while (cases--)
    {
        cin >> num;
        int a [num];
        for (int i = 0; i < num; i++)
        {
            cin >> a[i];
        }
        doer (a, num);
    }
    return 0;
}