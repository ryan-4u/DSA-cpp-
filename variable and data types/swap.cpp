#include<iostream>
using namespace std;
int main()
{
    int a, b,c;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    //method 1
    // c=a;
    // a=b;
    // b=c;
    //method 2
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping :"<<endl;
    cout<<"a = "<<a<<endl;  //using endl
    cout<<"b = "<<b<<endl;
    cout<<"After swapping :\n";
    cout<<"a = "<<a<<"\n";   //using '\n'
    cout<<"b = "<<b<<"\n";
    return 0;
}