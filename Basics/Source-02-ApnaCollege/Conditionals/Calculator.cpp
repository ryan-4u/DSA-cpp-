#include <iostream>
using namespace std ;
int main() 
{
    int a , b ;
    cout<<"Enter a and b: " ;
    cin>> a;
    cin>>b;
    char op ;
    cout<<"Operators can be : + - * / only"<<endl ;
    cout<<"Enter operator: " ;
    cin>>op ;
    switch(op){
        case '+' :
            cout<<"addition: "<<a+b<<endl ;
            break;
        case '-' :
            cout<<"subtraction: "<<a-b<<endl ;
            break;
        case '*' :
            cout<<"multiplication: "<<a*b<<endl ;
            break;
        case '/' :
            cout<<"division: "<<a/b<<endl ;
            break;
        default:
            cout<<"Enter only suggested operator";                
    }
    return 0 ;
}