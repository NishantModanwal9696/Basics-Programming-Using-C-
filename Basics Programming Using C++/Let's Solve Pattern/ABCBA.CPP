#include <iostream>
using namespace std;
void ABCBA(int n)
{

    for (int r = 0; r < n; r++)
    {
        char ch = 'A';
        for (int c = 0; c < r + 1; c++)
        {

            cout << ch << " ";
            ch++;
        }

        ch--;
        while (ch > 'A')

        {
            ch--;
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()

{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    ABCBA(n);
    return 0;
}