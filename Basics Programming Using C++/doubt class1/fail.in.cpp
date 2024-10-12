#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter your integer no:"<<endl;
    cin>>num;
    
    
    if(cin.fail()){
        cout<<"F"<<endl;
    }
    else{
        cout<<"S"<<endl;
    }
    return 0;
}

