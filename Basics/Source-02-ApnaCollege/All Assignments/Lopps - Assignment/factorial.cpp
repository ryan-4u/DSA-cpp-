#include<iostream>
using namespace std ;

int main()
{
    int fact ;
    cout<<"Enter number: ";
    cin>>fact ;

    int res = 1 ;
    for(int i=1 ; i<=fact ;i++)
    {
        res *= i ;
    }
    printf("%d! is equals to : %d\n",fact,res);
    return 0 ;
}