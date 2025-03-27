#include<iostream>
using namespace std ;
int main() {
    int sum = 0 ;
    int n,i ;
    cout<<"Enter naturnal number N: ";
    cin>>n ;
    for( i=1 ; i<=n ; i++){
        sum += i ;
    }
    cout<<"Sum of N natural numbers are: "<<sum<<endl ;
 
    return 0;
}