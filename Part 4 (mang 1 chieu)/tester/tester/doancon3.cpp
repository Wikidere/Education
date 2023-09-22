#include <bits/stdc++.h>
using namespace std;
int num;
int doer(int arr[])
{
    //bongthayminhquadeptrai!
    int best = INT_MIN;
    for (int i = 0; i < num; i++)
    {
        for (int j = i; j < num; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            best = max(best, sum);
        }
    }
    return best;
}
int main()
{
    cin >> num;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    cout << doer(a);
    return 0;
}