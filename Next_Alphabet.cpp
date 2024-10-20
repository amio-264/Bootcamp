#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch == 'z'){
        cout << 'a';
    }
    else{
        cout << char(ch + 1);
    }
    return 0;
}