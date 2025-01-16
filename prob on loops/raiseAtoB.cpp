#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int result=1;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
     while(b>0)
     {
       result *= a;
       b--;
     }
    cout<<"a raise to b: "<<result<<endl;
    return 0;
}