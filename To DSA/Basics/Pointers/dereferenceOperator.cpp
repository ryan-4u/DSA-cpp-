#include<iostream>
using namespace std ;
int main(){
    int a = 10 ;
    int *ptr = &a ;
    cout<< &a <<endl;
    //*(address of variable) = value of variable
    // *(&a) = *(ptr) = value of a = 10
    cout<< *(&a) <<endl;
    cout<< *(ptr) <<endl;

    return 0 ;
}