#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    bool possible = true;
    while (n--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            possible = false;
            break;
        }
    }
    if (possible)
    {
        cout << "EASY\n";
    }
    else
    {
        cout << "HARD\n";
    }

    return 0;
}