#include<iostream>
using namespace std ;
int main()
{
    int n = 5 ;
    bool x= true ;
    bool y=false ;
    for(int i=1 ; i<=n ;i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<x<<" ";
            x = !x ;
        }
        x=y ;
        y= !y ;
        cout<<endl;
    }
}