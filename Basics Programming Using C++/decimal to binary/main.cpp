#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the num:" << endl;
    cin >> num;
    int rem, ans = 0, mul = 1;
    while (num > 0)
    {
        // reminder
        rem = num % 2; // rem = num&1;

        // quotient
        num = num / 2; // num/=2;

        // ans
        ans = rem * mul + ans; // ans+=rem*mul;

        // mul
        mul = mul * 10; // mul*=10;
    }
    cout<<ans<<endl;

    return 0;
}