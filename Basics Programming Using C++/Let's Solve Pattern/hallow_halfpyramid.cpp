#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of Number:" << endl;
    cin >> n;
    // for (int r = 0; r < n; r++)
    // {
    //     int totalcolmns = r + 1;
    //     for (int c = 0; c < totalcolmns; c++)
    //     {
    //         if (r == 0 || r == 1 || r == n - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             if (c == 0 || c== totalcolmns- 1)
    //             {
    //                 cout << "* ";
    //             }
    //             else{
    //                 cout<< "  ";
    //             }
    //         }
            
    //     }
    //     cout << endl;
    // }



    for (int r = 0; r < n; r++)
    {
        int totalcolmns = r + 1;
        for (int c = 0; c < totalcolmns; c++)
        {
            if (r == 0 || r == n - 1 || c ==0 || c==r)
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
            
        }
        cout << endl;
    }

    return 0;
}