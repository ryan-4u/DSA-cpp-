#include<iostream>
using namespace std ;

int main() 
{
    int marks ;
    cout<<"Enter your marks : ";
    cin>>marks ;
    // if-else
        // if(marks>33){
        //     cout<<"Pass"<<endl ;
        // } else {
        //     cout<<"Fail"<<endl;
        // }
    // else if 
        if ( marks>=90 ) {
            cout<<"A"<<endl ;
        } else if ( marks>=80 ) {
            cout<<"B"<<endl;
        } else if ( marks>=33) {
            cout<<"C"<<endl ;
        } else {
            cout<<"fail" ;
        }
    return 0 ;
}