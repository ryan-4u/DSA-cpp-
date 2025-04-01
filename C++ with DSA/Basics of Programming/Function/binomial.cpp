// to calculate binomial coffecient
#include<iostream>
using namespace std ;

//factorial function
int factorial(int n){
    int f = n ;
    int fact = 1;
    for(int i=f;i>0;i--){
        fact = fact*i ;
    }
    return fact ;
}

//binomial coefficient function
int binCoeff(int n ,int r){
    int value1 = factorial(n);
    int value2 = factorial(r);
    int value3 = factorial(n-r);
    int result = value1 / (value2*value3) ;
    return result ;
}
//main
int main(){
    cout<<binCoeff(4,2)<<endl;
    cout<<binCoeff(7,3)<<endl;
    return 0 ;
}