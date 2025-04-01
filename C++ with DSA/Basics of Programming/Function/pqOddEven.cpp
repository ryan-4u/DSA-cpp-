#include<iostream>
using namespace std ;
bool getOddEven(int x){
    //0 -> even ,1 -> even
    if(x%2==0){
        return false  ;
    }else{
        return true;
    }
}
int main(){
    int num = getOddEven(7);
    if(num==1) printf("Odd\n");
    else printf("Even\n");
    return 0 ;
}