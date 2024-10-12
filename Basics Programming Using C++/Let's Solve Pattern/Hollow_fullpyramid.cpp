#include <iostream>
using namespace std;
void fullpyramid(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n - r - 1; c++)
        {
            cout << " ";
        }
        for (int c = 0; c < r + 1; c++)
        {
            if (r == 0 || r == n - 1 || c == 0 || c == r + 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    fullpyramid(n);
    return 0;
}