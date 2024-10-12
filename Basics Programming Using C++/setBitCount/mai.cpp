#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    int setBitCount = 0;
    while (n != 0)
    {
        int lastbit = (n & 1);

        if (lastbit == 1)
        {
            setBitCount = setBitCount + 1;
        }
        n = n >> 1;
    }
    cout << "Total set bit " << endl
         << setBitCount << endl;

    return 0;
}