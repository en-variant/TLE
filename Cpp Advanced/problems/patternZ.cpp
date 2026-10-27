#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int val = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
                continue;
            }
            else if (j == val)
            {
                cout << " *";
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
        val--;
    }

    return 0;
}