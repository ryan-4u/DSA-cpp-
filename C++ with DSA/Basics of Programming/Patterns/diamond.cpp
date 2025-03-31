#include<iostream>
using namespace std ;
int main () 
{
    int n ;
    cout<<"enter n: " ;
    cin>>n ;

    //phase 01
    for(int i=1 ;i<=n ;i++)
    {
        //spaces
        for(int j=n-i ; j>0 ;j--){
            cout<<"  ";
        }
        //stars
        for(int k=1 ;k<=(2*i)-1 ; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //phase 02
    for(int i=n-1 ;i>0 ;i--)
    {
        //spaces
        for(int j=1 ;j<=(n-i);j++){
            cout<<"  ";
        }
        //stars
        for(int k=((2*i)-1);k>0;k--){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0 ;
}