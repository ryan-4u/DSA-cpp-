#include<iostream>
using namespace std ;
int main(){
    int a = 10 ;
    int *ptr = &a ;

    float pi = 3.14 ;
    float *ptr2 = &pi ;

    cout<< &a <<" = "<<ptr<<endl;
    cout<< &pi <<" = "<<ptr2<<endl;
    return 0 ;
}