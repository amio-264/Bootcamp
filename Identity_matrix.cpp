#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> m[i][j];
        }
    }
    bool mat = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                if (m[i][j] == 1)
                {
                }
                else
                {
                    mat = false;
                }
            }
            else
            {
                if (m[i][j] == 0)
                {
                }
                else
                {
                    mat = false;
                }
            }
        }
    }
    if (mat)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}