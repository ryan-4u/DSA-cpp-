#include<iostream>
using namespace std ;

int isPowerOf2(int num){
    if( !( num & (num-1) )){
        return 1 ;
    } else {
        return false ;
    }
}

int main(){
    cout<<isPowerOf2(8)<<endl ;
    cout<<isPowerOf2(15)<<endl ;
    return 0 ;
}