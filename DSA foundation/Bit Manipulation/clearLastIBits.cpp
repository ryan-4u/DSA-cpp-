#include<iostream>
using namespace std ;

void clearLastIBit(int num,int i){
    int mask = (~0) << i ;
    num = num & mask ;
    cout<<num<<endl ;
    return ;
}

int main(){
    clearLastIBit(15,2);
    clearLastIBit(63,4);
    return 0 ;
}