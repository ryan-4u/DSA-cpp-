#include<iostream>
using namespace std ;
//function
int sumOfDigits(int n){
    int sum = 0 ;
    while(n>0){
        int lastDigit = n%10 ;
        sum += lastDigit ;
        n /= 10 ;
    }
    return sum ;
}
//main
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n ;
    cout<<"sum of digits:"<<sumOfDigits(n)<<endl;
    return 0 ;
}