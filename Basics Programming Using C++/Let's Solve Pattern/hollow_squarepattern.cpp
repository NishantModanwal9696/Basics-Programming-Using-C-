
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter length of side of square:" << endl;
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < n; col = col + 1)
        {

            if (row == 0 || row == n- 1 || col == 0 || col == n-1)
            {
                cout << "* ";
            }
            else
            {
                cout <<  "  ";
            }
            // if (row == 0 || row == n - 1)
            // {

            //     cout << "* ";
            // }
            // else
            // {
            //     if (col == 0 || col == n - 1)
            //     {

            //         cout << "* ";
            //     }
            //     else
            //     {

            //         cout << "  ";
            //     }
            // }
        }
        cout <<endl;
    }

    return 0;
}