#include<iostream>
using namespace std ;

int main() 
{
    int num1 , num2 , num3;
    cout<<"Enter first number : ";
    cin>>num1 ;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter third number : ";
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<num1 <<" is largest "<<endl ;
    }else if( num2>num1 && num2>num3) {
        cout<<num2 <<" is largest "<<endl ;
    }else {
        cout<<num3 <<" is largest "<<endl ;
    }
    return 0 ;
}