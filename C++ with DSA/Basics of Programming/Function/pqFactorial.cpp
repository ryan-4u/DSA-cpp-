#include<iostream>
using namespace std ;

int factorial(int n){
    int f = n ;
    int fact = 1;
    for(int i=f;i>0;i--){
        fact = fact*i ;
    }
    return fact ;
}
int main(){
    int fact=5 ;
    int facto = factorial(fact);
    cout<<"Factorial of "<<fact<<" is "<<facto<<endl;
    return 0 ;
}