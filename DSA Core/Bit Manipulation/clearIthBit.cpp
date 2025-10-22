#include<iostream>
using namespace std ;

int clearIthBit(int num,int i){
    int mask = ~(1<<i) ;
    
    return num & mask ;
}

int main(){
    cout<<clearIthBit(63,4)<<endl ;
    cout<<clearIthBit( 31,4)<<endl ;
    return 0 ;
}