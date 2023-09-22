#include <bits/stdc++.h>
using namespace std;
void doer(int cur_x, int cur_y, int timer, string a)
{
    int x1 = 0, y1 = 0;
    bool kq = false;
    if ((cur_x == x1 || cur_x + 1 == x1 || cur_x - 1 == x1) && (cur_y == y1 || cur_y - 1 == y1 || cur_y + 1 == y1))
    {
        cout << 0 << endl;
        kq = true;
    }
    for (int i = 0; i < timer; i++)
    {

        switch (a[i])
        {
        case 'R':
            x1++;
            break;
        case 'L':
            x1--;
            break;
        case 'U':
            y1++;
            break;
        case 'D':
            y1--;
            break;
        }
        if ((cur_x == x1 || cur_x + 1 == x1 || cur_x - 1 == x1) && (cur_y == y1 || cur_y - 1 == y1 || cur_y + 1 == y1))
        {
            cout << i + 1 << endl;
            kq = true;
        }
    }
    if (kq == false)
        cout << -1;
}
int main()
{
    int x, y;
    unsigned int n;
    string a;
    cin >> x >> y >> n >> a;
    doer(x, y, n, a);
    return 0;
}