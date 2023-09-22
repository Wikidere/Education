#include <bits/stdc++.h>
using namespace std;
/*
0: bac
1: dong
2: nam
3: tay
*/
int xt[4] = {0, 1, 0, -1};
int yt[4] = {1, 0, -1, 0};
//tuỳ theo số trong ngoặc nhọn mà những số dưới sẽ chọn trường hợp ở bên trên.
int l[4] = {3, 0, 1, 2};
int r[4] = {1, 2, 3, 0};
int b[4] = {2, 3, 0, 1};
int g[4] = {0, 1, 1, 2};
int n, x = 0, y = 0, h = 0;
char ch;
void doer()
{
    //cin luôn để tiết kiệm tg tối đa.
    for (int i = 1; i <= n; i++)
    {
        cin >> ch;
        if (ch == 'L')
            h = l[h];
        if (ch == 'R')
            h = r[h];
        if (ch == 'B')
            h = b[h];
        if (ch == 'G')
            h = g[h];
        //giống cái quần què trên.
        x += xt[h];//các trường hợp của xt.
        y += yt[h];//các trường họp của yt.
    }
    cout << x << " " << y;
}
int main()
{
    cin >> n;
    doer();
    return 0;
}
