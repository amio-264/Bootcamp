#include <iostream>
using namespace std;
int main()
{
    int price;
    cout << "Enter price: ";
    cin >> price;
    if (price >= 150)
    {
        cout << "Burger";
    }
    else if ((price >= 50) && (price < 150))
    {
        cout << "French Fries";
    }
    else
    {
        cout << "Nothing";
    }
    return 0;
}