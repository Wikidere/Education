#include <bits/stdc++.h>
using namespace std;
void doer(string s)
{
    int count = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i + 1] == ' ' && '0' <= s[i] && s[i] <= 'z')
            count++;
    }
    if (s[s.size() - 1] != ' ')
        count++;
    cout << count << endl;
}

void sec_doer(string s)
{
    for (int i = 1; i <= s.size(); i++)
    {
        if (s[i - 1] != ' ')
            cout << s[i - 1];
        else if (s[i] == ' ' && (s[i - 1] == s[i])) 
        {
            continue;
        }
        else if (s[i + 1] != ' ' && s[i] == ' ' && i + 1 < s.size()) continue;
        else cout << endl;
        
    }
    cout << endl;
}
int main()
{
    string S;
    getline(cin, S);
    doer(S);
    sec_doer(S);
    system("pause");
    return 0;
}