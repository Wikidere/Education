#include <bits/stdc++.h>
using namespace std;

int main()

{

    int A[10], j = 0;
    string S;
    getline(cin, S);
    for (int i = 0; i <= 9; i++)
        A[i] = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if ((int(S[i]) >= 48) && (int(S[i]) <= 57))
        {
            A[int(S[i]) - 48] += 1;
        }
    }

    for (int i = 0; i <= 9; i++)
        cout << A[i] << " ";
    return 0;
}