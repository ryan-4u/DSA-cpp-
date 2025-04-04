#include<iostream>
using namespace std ;
int main(){
    int a = 10 ;
    int *ptr = &a ;

    float pi = 3.14 ;
    float *ptr2 = &pi ;

    cout<< &a <<" = "<<ptr<<endl;
    cout<< &pi <<" = "<<ptr2<<endl;

    // size of pointers
    cout<< sizeof(ptr)<<endl;
    cout<< sizeof(ptr)<<endl;
    
    //pointer to pointer
    int **pptr = &ptr ;
    cout<<&ptr<<" = "<<pptr<<endl;
    return 0 ;
}