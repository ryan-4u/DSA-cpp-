#include<iostream>
using namespace std ;

int product(int a ,int b){
    int mul = a*b ;
    return mul ;
}
int main(){
    int multiply = product(3,4);
    cout<<"Product is: "<<multiply<<endl;
    return 0 ;
}