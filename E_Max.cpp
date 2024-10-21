#include <iostream>
using namespace std;
int main()
{
    int n, num, max;
    cin >> n >> num;
    max = num;
    for (int i = 2; i <= n; i++)
    {
        cin >> num;
        if (num > max)
        {
            max = num;
        }
    }
    cout << max << endl;
    return 0;
}