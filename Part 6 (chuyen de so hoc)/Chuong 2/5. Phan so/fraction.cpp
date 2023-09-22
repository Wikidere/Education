#include <iostream>
using namespace std;

int main()
{
    int b, n;
    cin >> b >> n;
    int count = 0;
        for (int m = 1; m <= 2 * n; m++)
        {
            if (m != n && long long (b * m * (2 * n - m)) % (n * n) == 0)
            {
                count++;
            }
        }
    cout << count << endl;
    return 0;
}
