#include <bits/stdc++.h>
using namespace std;
int Max;
void InsertionSort(int a[], int n)
{
    int UwU = 0;
    int count = 0;
    int pos, x;
    for (int i = 1; i < n; i++)
    { // đoạn a[0] đã sắp
        x = a[i];
        pos = i;
        while (pos > 0 && x < a[pos - 1])
        {
            a[pos] = a[pos - 1]; // dời chỗ
            pos--;
        }
        a[pos] = x;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] + UwU <= Max)
        {
            UwU = UwU + a[i];
            count++;
        }
    }
    cout << count;
}
int main()
{
    int num;
    cin >> num >> Max;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    InsertionSort(a, num);
    return 0;
}