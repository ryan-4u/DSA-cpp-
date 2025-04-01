#include<iostream>
using namespace std ;
int binToDec(int num){
    int n = num ;
    int decNum = 0 ;
    int pow = 1 ;

    while(n>0){
        int lastDigit = n % 10 ;
        decNum = decNum + lastDigit*pow ;
        pow *= 2 ;
        n /= 10 ;
    }
    return decNum ;
}
int main(){
    int binNumber ;
    cout<<"Enter Binary number: ";
    cin>>binNumber;
    cout<<"The decimal no is: "<<binToDec(binNumber)<<endl;
    return 0 ;
}