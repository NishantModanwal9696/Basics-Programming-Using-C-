#include <iostream>
using namespace std;
void mixhalfpyramid1(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n - r; c++)
        {
            cout << "* ";
        }
        for (int c = 0; c < 2 * r + 1; c++)
        {
            cout << "  ";
        }
        for (int c = 0; c < n - r; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void mixhalfpyramid2(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }
        for (int c = 0; c < 2 * n - 2 * r - 1; c++)
        {
            cout << "  ";
        }
        for (int c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void mixpyramid(int n)
{
    mixhalfpyramid1(n);
    mixhalfpyramid2(n);
}
int main()
{
    int n;
    cout << "Enter th number:" << endl;
    cin >> n;
    mixpyramid(n);
    return 0;
}