#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, star = 1;
//     cout << "Enter n: ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= star; col++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//         star++;
//     }
//     return 0;
// }

// *
// **
// ***
// ****
// *****