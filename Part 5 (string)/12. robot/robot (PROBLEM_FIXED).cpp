#include <bits/stdc++.h>
using namespace std;
const Null(0);
void doer(int n, string a)
{
    /*
    1: dong
    2: tay
    3: nam
    4: bac
    */
    int compass(4), x1{}, y1{};
    for(int i = 0; i < n; i++)
    {
        switch (a[i])
        {
        case 'R':
            switch (compass)
        {
        case 1:
            y1=y1-1;
            compass = 3;
            break;
        case 2:
            y1++;
            compass = 4;
            break;
        case 3:
            x1--;
            compass = 2;
            break;
        case 4:
            x1++;
            compass = 1;
            break;
        }
            break;
        //__________________________
        case 'L':
            switch (compass)
        {
        case 1:
            y1++;
            compass = 4;
            break;
        case 2:
            y1--;
            compass = 3;
            break;
        case 3:
            x1++;
            compass = 1;
            break;
        case 4:
            x1--;
            compass = 2;
            break;
        }
            break;
        //__________________________
        case 'G':
            switch (compass)
        {
        case 1:
            x1++;
            compass = 1;
            break;
        case 2:
            x1--;
            compass = 2;
            break;
        case 3:
            y1--;
            compass = 3;
            break;
        case 4:
            y1++;
            compass = 4;
            break;
        }
            break;
        //__________________________
        case 'B':
            switch (compass)
        {
        case 1:
            x1--;
            compass = 2;
            break;
        case 2:
            x1++;
            compass = 1;
            break;
        case 3:
            y1++;
            compass = 4;
            break;
        case 4:
            y1--;
            compass = 3;
            break;
        }
            break;
        }
    }
    cout << x1 << " " << y1;
}
int main()
{
    int num;
    string a;
    cin >> num;
    cin >> a;
    doer (num, a);
    return 0;
}