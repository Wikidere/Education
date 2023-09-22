#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;

vector<int> primes(int n)
{
    vector<int> prime;
    vector<bool> checker(n + 1, true);
    checker[0] = checker[1] = false;

    for (int i = 2; i <= 100000; i++)
    {
        if (i == 2218)
             cout << " ";
        if (checker[i])
        {
            prime.push_back(i);
            for (int j = 2 * i; j <= 100000; j += i)
            {
                checker[j] = false;
            }
        }
    }
    return prime;
}

vector<int> prime_factors(int n, vector<int> &prime)
{
    vector<int> factor(prime.size());
    for (int i = 0; i < prime.size(); i++)
    {
        int p = prime[i];
        while (p <= n)
        {
            factor[i] += n / p;
            p *= prime[i];
        }
    }

    return factor;
}

int main()
{
    //freopen("D:\\C++ Projects\\Part 6 (chuyen de so hoc)\\Chuong I\\1.10, bieu dien N!\\ANALYSE.INP", "r", stdin);
    //freopen("D:\\C++ Projects\\Part 6 (chuyen de so hoc)\\Chuong I\\1.10, bieu dien N!\\ANALYSE.out", "w", stdout);
    string line;
    while (getline(cin, line))
    {
        istringstream iss(line);
        int n;
        if (!(iss >> n))
        {
            break; // hết đầu vào
        }
        vector<int> prime = primes(n);
        vector<int> factor = prime_factors(n, prime);

        for (int i = 0; i < factor.size(); i++)
        {
            cout << factor[i] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
