#include<iostream>
using namespace std;
int main()
{
    float discount, currentPrice;
    cin >> discount >> currentPrice;
    float originalPrice = currentPrice / (1 - discount / 100);
    printf("%0.2f", originalPrice);
    return 0;
}