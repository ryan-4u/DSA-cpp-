#include<iostream>
using namespace std ;
int main()
{
    int income ;
    cout<<"Enter your income(in lakhs) : " ;
    cin>> income ;
    if(income<5){
        cout<<" 0 % tax"<<endl ;
    } else if(income<10){
        cout<<" 20 % tax"<<endl ;
    } else {
        cout<<" 30 % tax"<<endl ;
    }
    return 0 ;
}