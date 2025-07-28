#include<iostream>
using namespace std ;

void countSetBits(int num){
    int count = 0 ;
    while(num>0){
        int lasDg = num & 1 ;
        count += lasDg ;
        num = num >> 1 ;
    }
    cout<<"Count is : "<<count<<endl ;
    return ;
}

int main(){
    countSetBits(10) ;
    return 0 ;
}