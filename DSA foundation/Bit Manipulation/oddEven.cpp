#include<iostream>
using namespace std ;

void oddEven(int n){
    if(n&1){
        cout<<"odd"<<endl;
        return ;
    }else{
        cout<<"even"<<endl;
        return ;
    }
}
int main(){
    oddEven(7);
    oddEven(76);

    return 0 ;
}