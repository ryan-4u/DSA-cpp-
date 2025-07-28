#include<iostream>
using namespace std ;

void updateIthBit(int num , int i, int val){
    // s-1 -> clearing the bit
    num = num & ( ~(1<<i) ) ;
    //step 2 -> 
    num = num | ( val << i ) ;
    cout<< num <<endl  ;
    return ;
}

int main(){
    updateIthBit(7,2,0) ;
    updateIthBit(7,3,1) ;
    return 0 ;
}