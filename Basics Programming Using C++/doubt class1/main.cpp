#include <iostream>
using namespace std;
int letsParty(int a, int b)
{

    cout << "Doing party" << endl;
    int sum = a + b;
    return sum;
}
 namespace Nishant
 {
    
 
int letsParty(int a, int b)
{

    cout << "Nishant Doing party" << endl;
    int sum = a + b;
    return sum;
}
 }

int main()
{
    int sum = letsParty(5, 4);
    cout<<sum<<endl;
     int sum2 = Nishant::letsParty(6,10);
    cout<<sum2;
    return 0;
}