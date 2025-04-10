#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    int n ;
    cout<<"Enter number: ";
    cin>>n;

    int i,j ;
    bool isPrime ;
    cout<<"The prime numbers are: " ;
    cout<<"2 ";
    for( i=2; i<=n ;i++)
    {
        isPrime = 1 ;
        for( j=2 ; j<=sqrt(n);j++)
        {
            if (i%j == 0)
            {
                isPrime = 0 ;
                break ;
            }
        }
        if(isPrime == 1) printf("%d ",j) ;
    }
    return 0 ;
}