#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the num" << endl;
    cin >> num;
    int ans = 0, rem, mul = 1;
    while (num > 0)
    {
        // reminder
        rem = num % 10;
        // num ko devide kar do
        // num = num / 10; 
        num/=10;
        // ans
        // ans = rem * mul + ans;
        ans+=rem*mul;
        // mul
        // mul = mul * 2;
        mul*=2;
    }
    cout << ans <<endl;
}