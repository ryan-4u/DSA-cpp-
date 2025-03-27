#include <iostream>
using namespace std ;

int main()
{
    int num ;
    cout<<"Enter number: ";
    cin>>num ;

    int sum = 0;
    while(num>0)
    {
        int ld = num%10 ; //ld = last digit
        cout<<ld ;;
        num /= 10 ;
    }
     
    return 0;
}