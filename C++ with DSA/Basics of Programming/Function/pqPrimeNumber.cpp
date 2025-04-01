#include<iostream>
#include<cmath>
using namespace std ;

bool isPrime(int n){
     
    if ( n == 1) {
        return false ;
    } 

    for(int i=2 ; i<sqrt(n); i++){
        if( n % i == 0){
            return false ;
        }
    }

    return true ;
}

int main()
{
    int n = 13;
    int flag = isPrime(n) ;

    if (flag == 1) printf("%d is a prime number\n",n);
    else printf("%d is a non-prime number\n",n);

    return 0 ;
}