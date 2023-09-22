#include <bits/stdc++.h>
using namespace std;
int num;
    void InsertionSort(float a[], int n)
{
    float x;
    int pos;
    for (int i = 1; i < n; i++)
    { 
        x = a[i];
        pos = i;
        while (pos > 0 && x < a[pos - 1])
        {
            a[pos] = a[pos - 1]; 
            pos--;
        }
        a[pos] = x;
    }
    cout << setprecision(2) << fixed;
    for (int i = 0; i < num; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = num - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    cin >> num;
    float a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    InsertionSort(a, num);
    return 0;
}