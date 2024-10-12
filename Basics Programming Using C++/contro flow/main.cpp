#include <iostream>
using namespace std;
int main()
{
     // int budget;
     // cout<<"Enter your budget"<<endl;
     // cin>> budget;
     // if(budget > 2000000)
     // {
     //      cout<<"you can by Scropio";
     // }
     // else{
     //      cout<<"You can not by Scropio";
     // }
     // int marks;
     // cout << "Enter yopur marks" << endl;
     // cin >> marks;
     // if (marks > 90)
     // {
     //      cout << "A";
     // }
     // else if (marks > 80)
     // {
     //      cout << "B";
     // }
     // else if (marks > 70)
     // {
     //      cout << "C";
     // }
     // else if (marks > 60)
     // {
     //      cout << "D";
     // }
     // else if (marks > 50)
     // {
     //      cout << "E";
     // }
     // else
     // {
     //      cout << "You Failed";
     // }
     // int height;
     // cout << "Enter your height" << endl;
     // cin >> height;

     // int weight;
     // cout << "Enter your weight" << endl;
     // cin >> weight;
     // if (height > 5)
     // {
     //      if (weight > 70)
     //      {
     //           cout << "you got a good BMI" << endl;
     //      }
     //      else
     //      {
     //           cout << "Bhai tujhase na ho payega" << endl;
     //      }
     // }
     // else
     // {

     //      cout << " Complain dila du" << endl;
     // }

     int height;
     cout << "Enter your height in feet:" << endl;
     cin >> height;

     int weight;
     cout << "enter your weight:" << endl;
     cin >> weight;

     if (height > 5)
     {
          if (weight > 70)
          {
               cout << "You got a good BMI:" << endl;
          }
          else
          {
               cout << "Tujhase na ho payega:" << endl;
          }
     }
     else
     {
          cout << "Complian dila du bhai:" << endl;
     }
     return 0;
}