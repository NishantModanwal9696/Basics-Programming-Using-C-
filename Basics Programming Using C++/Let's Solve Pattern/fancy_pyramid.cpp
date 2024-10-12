#include <iostream>
using namespace std;
void fancy(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < 2 * r + 1; c++)
        {
            if (c % 2 == 0)
            {
                cout << r + 1<<" ";
            }
            else
            {
                cout << "* ";
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
    fancy(n);
    return 0;
}
