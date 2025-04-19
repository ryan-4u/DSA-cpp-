#include<iostream>
using namespace std ;

bool getIthBit(int num,int i){
    int mask = 1<<i ;
    if( !(num&mask) ){
        return false ;
    }else{
        return true  ;
    }
}

int main(){
    cout<<getIthBit(6,2)<<endl ;
    cout<<getIthBit(15,3)<<endl ;
    return 0 ;
}