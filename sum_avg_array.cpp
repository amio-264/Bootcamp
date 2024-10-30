#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    double avg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    avg = (1.0 * sum / n);
    cout << "Sum = " << sum<<"\n";
    cout << "Average = " << avg;
    return 0;
}