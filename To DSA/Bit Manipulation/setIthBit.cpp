#include<iostream>
using namespace std ;

int setIthBit(int num,int i){
    int mask = 1<<i ;
    return num | mask ;
}

int main(){
    cout<<setIthBit(6,4)<<endl ;
    cout<<setIthBit(15,4)<<endl ;
    return 0 ;
}