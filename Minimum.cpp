#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int MIN = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < MIN)
        {
            MIN = a[i];
        }
    }
    cout << "Minimum Value: " << MIN << "\n";
    return 0;
}