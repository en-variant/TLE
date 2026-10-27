#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long k;
    long n;
    long w;
    cin >> k;
    cin >> n;
    cin >> w;

    long moneyNeeded = 0;
    for (size_t i = 1; i <= w; i++)
    {
        moneyNeeded += i * k;
    }

    if (moneyNeeded <= n)
    {
        cout << 0 << '\n';
    }
    else
    {

        cout << moneyNeeded - n << '\n';
    }
}