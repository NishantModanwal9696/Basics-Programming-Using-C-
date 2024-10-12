#include <iostream>
using namespace std;
void fancy1(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < 2 * r + 1; c++)
        {
            if (c % 2 == 0)
                {
                    cout << r + 1 << " ";
                }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
void fancy2(int n)
{
    n--;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < 2 * n - 2 * r - 1; c++)
        {
            if (c % 2 == 0)
            {
                cout << n-r << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
void fancy(int n)
{
    fancy1(n);
    fancy2(n);
}

int main()
{

    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    fancy(n);
    return 0;
}
