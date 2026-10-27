#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    auto reverse = true;
    int length = 1;
    int temp = 1;
    int val = 1;

    for (auto i = 0; i < n; i++)
    {
            if (!reverse)
            // correct order
            {
                for (int i = 0; i < length; i++)
                {
                    cout << temp << " ";
                    temp++;
                }
                length++;
                val += length;
                temp = val;
                reverse = true;
            }
            else{
                // reverse order
                for (int j = 0; j < length; j++)
                {
                    cout << temp << " ";
                    temp--; 
                }
                length++;
                temp = val+1;
                val += length;
                reverse = false;
            }
            cout << '\n';
        }
    return  0;
}