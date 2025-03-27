#include<iostream>
using namespace std ;
int main() {
    int num ;
    cout<<"Enter number: ";
    cin>>num ;

    int sum = 0;
    while(num>0)
    {
        int ld = num%10 ; //ld = last digit
        sum += ld ;
        num /= 10 ;
    }
    cout<<"sum of digits of the number is "<<sum<<endl;
    return 0;
}