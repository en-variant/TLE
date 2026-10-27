#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int testcases = 1;
    // cin >> testcases;
    while (testcases--)
    {
        long a;
        long b;
        cin >> a;
        cin >> b;

        long res = 0;
        while (a <= b)
        {
            a *= 3;
            b *= 2;
            res++;
        }

        cout << res;
    }

    return 0;
}