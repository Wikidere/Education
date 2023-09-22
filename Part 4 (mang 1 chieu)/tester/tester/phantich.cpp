#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
// bong thay minh qua dep trai!

int main()
{
    int n;
    cin >> n;
    int dem;

    for (int i = 2; i <= n; i++)
    {
        dem = 0;
        while (n % i == 0)
        {
            ++dem;
            n /= i;
        }
        if (dem)
        {
            cout << i;
            if (dem >= 1)
                cout << " " << dem;
            if (n > i)
            {
                cout << endl;
            }
        }
    }
    return 0;
}