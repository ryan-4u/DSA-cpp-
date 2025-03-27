#include<iostream>
using namespace std ;    
int main()
   { 
    int num ;
    cout<<"Enter number: ";
    cin>>num ;

    int rev = 0;
    while(num>0)
    {
        int ld = num%10 ; //ld = last digit
        rev = rev*10 + ld ;
        num /= 10 ;
    }
    cout<<"reverse of the given number is "<<rev<<endl;
    return 0;
}