// to check whether a no is armstrong or not
#include <iostream>
#include <cmath> // to use power function pow(5,3) = 5*5*5
using namespace std ;
int main() 
{
    int number ;
    cout<<"Enter a 3-digit number: " ;
    cin >> number ;
    
    int originalNum = number ;
    int newnumber = 0 ;

    int remainder = number % 10 ;
    newnumber += pow(remainder,3) ; //cube of last digit of 3-digit number
    number /= 10 ;

    remainder = number % 10 ;
    newnumber += pow(remainder,3) ; //cube of middle digit of 3-digit number
    number /= 10 ;

    remainder = number % 10 ;
    newnumber += pow(remainder,3) ; //cube of first digit of 3-digit number
    number /= 10 ;

    if(originalNum == newnumber){
        cout<<"It is a armstrong number"<<endl;
    }else{
        cout<<"It is not a armstrong number"<<endl;
    }
    return 0 ;
}