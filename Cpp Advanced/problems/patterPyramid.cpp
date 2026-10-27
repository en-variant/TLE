#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    auto last = 1;
    for (int i = 2; i <= n; i++)
    {
        last += 2;
    }

    auto middle = last / 2 + 1;
    auto start = middle;
    auto end = middle;

    for (int i = 1; i <= n; i++)
    {
        for (auto j = 1; j <= end; j++)
        {
            if (j >= start && j <= end)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        start--;
        end++;
        cout << '\n';
    }

    return 0;
}