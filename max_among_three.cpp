#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three number: ";
    cin >> a >> b >> c;
    if ((a > b) && (a > c))
    {
        cout << "A is biggest";
    }
    else if ((b > a) && (b > c))
    {
        cout << "B is biggest";
    }
    else
    {
        cout << "C is biggest";
    }
    return 0;
}