#include<iostream>
using namespace std ;
//function
int largestOfThree(int a ,int b , int c ){
    if(a>c){
        if(a>b) return a ;
        else return b ;
    }else{
        if(c>b) return c ;
        else return b ;
    }
}
//main
int main(){
    int a , b , c ;
    cout<<"Enter all three numbers: ";
    cin>>a ;
    cin>>b ;
    cin>>c ;
    cout<<"Largest of three numbers is: "<<largestOfThree(a,b,c)<<endl;
    return 0 ;
}