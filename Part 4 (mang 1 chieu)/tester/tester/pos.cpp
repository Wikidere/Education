#include <bits/stdc++.h>
using namespace std;
int n;
float x;
void amduong(float m[])
{
    float firstam, lastduong, firstx, lastx;
    bool kqam = true;
    bool kqx = true;
    for (int i = 0; i < n; i++)
    {
        if (m[i] < 0 && kqam == true)
        {
            firstam = m[i];
            kqam = false;
        }
        if (m[i] > 0)
            lastduong = m[i];
        if (m[i] == x && kqx == true)
        {
            firstx = i+1;
            kqx = false;
        }
        if (m[i] == x)
            lastx = i+1;
    }
    cout << setprecision(2) << fixed << firstam << " " << lastduong << endl;
    cout << setprecision(0) << fixed << firstx << " " << lastx;
}
int main()
{
    cin >> n >> x;
    float a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    amduong(a);
    return 0;
}