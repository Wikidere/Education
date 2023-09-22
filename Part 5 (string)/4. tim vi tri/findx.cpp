#include <bits/stdc++.h>
using namespace std;
void doer (string s, char req)
{
    int count = 0;
    vector <int> kq;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] ==  req)
        {
            count++;
            kq.push_back(i);
        }
    }
    cout << count << endl;
    for(int i = 0; i < kq.size(); i++)
    {
        cout << kq[i] << " ";
    }
}
int main()
{
    string req;
    string S;
    getline(cin, req);
    getline (cin, S);
    doer (S, req[0]);
    return 0;
}