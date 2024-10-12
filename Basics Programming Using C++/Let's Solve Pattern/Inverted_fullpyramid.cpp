# include<iostream>
using namespace std;
void invertedfullpyramid(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r+0; c++)
        {
         cout<<" ";
        }
        for (int c = 0; c <n-r ; c++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}

int main()
{
     int n ;
     cout<<"Enter the number:"<<endl;
      cin>>n;
      invertedfullpyramid(n);
      return 0;
}