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
        //stars
        for(int k=1 ;k<=i ; k++){
            cout<<"* ";
        }
        //spaces
        for(int j=((2*n)-(2*i)) ; j>0 ;j--){
            cout<<"  ";
        }
        //stars
        for(int k=1 ;k<=i ; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //phase 02
    for(int i=n ;i>=1 ;i--)
    {
        //stars
        for(int k=1 ;k<=i ; k++){
            cout<<"* ";
        }
        //spaces
        for(int j=((2*n)-(2*i)) ; j>0 ;j--){
            cout<<"  ";
        }
        //stars
        for(int k=1 ;k<=i ; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0 ;
}