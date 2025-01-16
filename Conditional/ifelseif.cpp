#include <iostream>
using namespace std ;
int main()
{
    int age ;
    cout<<"enter age : ";
    cin>> age;
    if(age<12){
        cout<<"Child"<<endl;
    } 
    else if(age<18 &&age>12){
    cout<<"teenager"<<endl;
    }
    else{
    cout<<"adult"<<endl;
    }
    return 0;
}