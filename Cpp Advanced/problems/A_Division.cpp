#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        long n;
        cin >> n;
        if (n >= 1900)
        {
            cout << "Division 1" << '\n';
        }
        else if (n >= 1600)
        {
            cout << "Division 2" << '\n';
        }
        else if (n >= 1400)
        {
            cout << "Division 3" << '\n';
        }
        else
        {
            cout << "Division 4" << '\n';
        }
    }

    return 0;
}