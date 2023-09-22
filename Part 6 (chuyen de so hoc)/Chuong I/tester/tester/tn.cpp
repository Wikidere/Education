#include <bits/stdc++.h>
using namespace std;
int num;
void doer (int a[])
{
    int UwU;
    for(int i = 1; i < INT_MAX; i++)
    {
        
        bool kq = true;
        for(int j = 0; j < num; j++)
        {
            if(i % a[j] != 0)
            {
                kq = false;
                break;
            }
        }
        if(kq == true) 
        {
            cout << i << endl;
            UwU = i;
            break;
        }
    }
    for(int i = 0; i < num; i++)
    {
        cout << UwU / a[i] << " "; 
    }
}
int main()
{
    
    cin >> num;
    int a[num];
    for(int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    doer(a);
    return 0;
}