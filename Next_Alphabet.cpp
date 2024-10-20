#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if(ch=='z'){
        cout << 'a';
    }
    else if (ch >= 'a' || ch <= 'z'){
        ch++;
        cout << ch;
    }
        return 0;
}