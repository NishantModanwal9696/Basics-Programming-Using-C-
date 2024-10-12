#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of Number:" << endl;
    cin >> n;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n - r; c++)
        {
            cout << (c+1) << "  ";
        }
        cout << endl;
    }

    return 0;
}