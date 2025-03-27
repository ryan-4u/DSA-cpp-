#include <iostream>
using namespace std ;
int main ()
{
    // int i = 0 ;
    // while(i<5)
    // {
    //     cout<<i<<" ";
    //     if( i==3 ) break;
    //     i++ ;
    //     printf("\n") ;
    // }

    // practice question
    int num ;
    while(1)
    {
        cout<<"Enter number: ";
        cin>>num ;
        if( num%10 == 0 ) break ;
    }
    return 0 ;
}