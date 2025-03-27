#include<iostream>
#include <cmath> // to use square root function
using namespace std ;
int main()
{
    int num ;
    cout<<"Enter number: ";
    cin>>num ;
    
    int isPrime = 1 ;
    for( int i=2 ; i<sqrt(num) ;i++)
    {
        if( num%i == 0 ){
            isPrime = 0 ;
            break ;
        }
    }
    if(isPrime == 1){
        cout<<num<<" is a prime number."<<endl ;
    }else{
        cout<<num<<" is a composite number"<<endl ;
    }
    return 0 ;
}