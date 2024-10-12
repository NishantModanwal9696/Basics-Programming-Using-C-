#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter your grade:" << endl;
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "your marks will be range 90 to 100" << endl;
        break;
    case 'B':
        cout << "your marks will be range 80 to 90" << endl;
        break;
    case 'C':
        cout << "your marks will be range 70 to 80" << endl;
        break;
    case 'D':
        cout << "your marks will be range 60 to 70" << endl;
        break;

    default:

        cout << "your marks will be range 0 to 60" << endl;
    }
    return 0;
}