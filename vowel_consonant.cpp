#include<iostream>
using namespace std;
int main()
{
    for (char i = 'A'; i <= 'Z'; i++){
        if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
        {
            cout << i << "-Vowel";
        }
        else{
            cout << i << "-Consonant";
        }
        cout << "\n";
    }
        return 0;
}