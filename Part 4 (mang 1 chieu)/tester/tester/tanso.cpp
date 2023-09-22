#include <bits/stdc++.h>
using namespace std;
int num;
void tanso(int a[])
{
    int chuong[201] = {};
    for (int i = 0; i < num; i++)
    {

        chuong[a[i] + 100]++;
    }
    for (int j = 0; j < 200; j++)
    {
        if (chuong[j] != 0)
        {
            cout << j - 100 << " " << chuong[j] << endl;
        }
    }
}
int main()
{
    cin >> num;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    tanso(a);
    return 0;
}