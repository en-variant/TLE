#include <bits/stdc++.h>
using namespace std;

long long fib(int n);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    long long res = fib(n - 1);
    cout << res << '\n';
    return 0;
}

long long fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    long long a = 0;
    long long b = 1;
    long long res = 0;

    for (int i = 2; i <= n; i++)
    {
        res = (a + b);
        a = b;
        b = res;
    }

    return res;
}