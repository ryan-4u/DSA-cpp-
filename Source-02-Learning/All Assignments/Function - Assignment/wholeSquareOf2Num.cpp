#include<iostream>
using namespace std ;
//function
int wholeSquare(int a, int b){
    int output = (a*a) + (b*b) + (2*a*b) ;
    return output ;
}

//main
int main(){
    cout<<wholeSquare(2,2)<<endl;
    cout<<wholeSquare(2,3)<<endl;
    cout<<wholeSquare(3,3)<<endl;

    return 0 ;
}