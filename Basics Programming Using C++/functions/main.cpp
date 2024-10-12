#include <iostream>
using namespace std;
int getMultiplication(int x, int y, int z){
    int result = x*y*z;
    return result;
}

void printNameTenTime()
{
    for(int i=1; i<=10; i++)
    {
        cout<<"Nishant Modanwal"<<endl;
    }
}

void printMultiple(int num)
{
     for(int i = 1; i<=10; i++)
     {
        cout<<num*i<<endl;
     }
}
int main()
{

    // function call

  int ans = getMultiplication(4,5,6);
  cout<<ans <<endl;

  printNameTenTime();
  printMultiple(5);
    return 0;
}