#include <iostream>
using namespace std;
int main()
{
    int length;
    int width;
    cout << "Enter your length:" << endl;
    cin >> length;
    cout << "Enter your width:" << endl;
    cin >> width;
    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col < width; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}