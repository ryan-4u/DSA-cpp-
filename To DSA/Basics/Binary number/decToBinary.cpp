#include<iostream>
using namespace std ;

int decToBin(int num){
    int n=num ;
    int binNum = 0 ;
    int pow = 1 ;

    while(n>0){
        int rem = n % 2;
        binNum +=  rem*pow ;
        pow *= 10 ;
        n /= 2 ;
    }
    return binNum ;
}
int main(){
    int decNumber ;
    cout<<"Enter decimal number: ";
    cin>>decNumber;
    cout<<"The binary no is: "<<decToBin(decNumber)<<endl;
    return 0 ;
}