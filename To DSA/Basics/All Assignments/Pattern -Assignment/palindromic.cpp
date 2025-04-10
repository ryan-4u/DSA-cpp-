#include<iostream>
using namespace std ;
int main()
{
    int n = 5 ;

    for(int i=1 ; i<=n ;i++)
    {
        //spaces
        for(int j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        //back num
        for(int k=i ;k>0;k--){
            cout<<k<<" ";
        }
        //forward num
        for(int l=2 ; l<=i ;l++)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
}