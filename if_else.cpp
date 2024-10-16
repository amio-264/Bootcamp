#include <iostream>
using namespace std;
int main()
{
    int price;
    cout << "Enter price: ";
    cin >> price;
    if (price >= 300)
    {
        if (price >= 500)
        {
            cout << "Burger , Fries , Coke and Ice Cream";
        }
        else
        {
            cout << "Only Burger";
        }
    }
    else if (price >= 100)
    {
        if (price >= 200)
        {
            cout << "Fries and Ice Cream";
        }
        else if (price >= 150)
        {
            cout << "Fries and Coke";
        }
        else
        {
            cout << "Only Fries";
        }
    }
    else
    {
        cout << "No Burger";
    }
    return 0;
}