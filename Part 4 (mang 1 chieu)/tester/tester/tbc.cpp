#include <bits/stdc++.h>
using namespace std;
int n;
float UwU;
float tbc(float x[])
{
    float tong = 0;
    float kq = 0;
    for (int i = 0; i < n; i++)
    {
        tong = tong + x[i];
    }
    kq = tong / n;
    return kq;
}
vector <float> Nearest (float a[])
{
    float best = 999999;
    vector <float> kq, finale;
    for (int i = 0; i < n; i++)
    {
        kq.push_back(abs(UwU - a[i]));
        best = min(abs(UwU - a[i]), best);
    }
    for (int i = 0; i < n; i++)
    {
        if(kq[i] == best)
        {
            finale.push_back(a[i]);
        }
    }
    return finale;
} 
int main()
{
    cin >> n;
    float a[n];
    for (int i; i < n; i++)
    {
        cin >> a[i];
    }
    UwU = tbc(a);
    cout << UwU << endl;
    for (int i = 0; i < Nearest(a).size(); i++)
    {
        cout << Nearest(a)[i] << " ";
    }
    system ("pause");
    return 0;
}