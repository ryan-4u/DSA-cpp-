#include<iostream>
using namespace std ;

int main() 
{
    int num1 , num2;
    cout<<"Enter first number : ";
    cin>>num1 ;
    cout<<"Enter second number : ";
    cin>>num2;
    if(num1>num2){
        cout<<num1 <<" is larger than "<<num2<<endl ;
    } else {
        cout<<num2 <<" is larger than "<<num1<<endl ;
    }
    return 0 ;
}