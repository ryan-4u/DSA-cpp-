#include<iostream>
using namespace std ;
// with pointers
void changeA(int *a){
     *a = 20 ;
    cout<< *a <<endl;
}
int main(){
    int a = 10 ;
    changeA(&a) ;
    cout<< a <<endl;
    return 0 ;
}