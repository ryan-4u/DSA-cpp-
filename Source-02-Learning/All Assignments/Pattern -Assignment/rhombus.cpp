#include<iostream>
using namespace std ;
int main()
{
    int n = 5 ;
     
    for(int i=1 ; i<=n ;i++)
    {
        //spaces
        for(int j=n-i; j>0; j--)
        {
            cout<<"  ";
        }
        //stars
        for(int k=1 ;k<=n ;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}