#include<iostream>
using namespace std;
int main()
{
    int price;
    cout << "Enter price: ";
    cin >> price;
    if(price>=150){
        cout << "Burger";
    }
    else{
        cout << "No Burger";
    }
    return 0;
}