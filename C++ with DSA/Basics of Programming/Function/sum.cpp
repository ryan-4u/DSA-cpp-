#include<iostream>
using namespace std ;

int sum (int a , int b){
    int add = a+b  ;
    return add ;
}
int add (int a , int b=5){
    int add = a+b  ;
    return add ;
}
int diff (int a , int b){
    int sub = a-b  ;
    return sub ;
}
int main(){
    int s = sum(3,7);
    cout<<"sum is : "<<s<<endl;
    int a = add(3);
    cout<<"sum is : "<<a<<endl;
    int d = diff(13,7);
    cout<<"difference is : "<<d<<endl;
    return 0 ;
}