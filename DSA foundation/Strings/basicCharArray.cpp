#include<iostream>
#include<string.h>
using namespace std ;
int main(){
    // a char array must end with '\0' ,
    //otherwise we will get some special characters with output
    char str1[] = { 'l','o','v','e' } ;
    cout<<str1<<endl ;
    //if char array size is greater than the value and
    // '\0' is at end then furthur spaces remain to be undeclared
    //and didn't cause any problem and if not present '\0' 
    //then we will get garbage value
    char str2[10] = { 'l','o','v','e' } ;
    cout<<str2<<endl ;
    cout<<str2[2]<<endl ;
    char str3[10] = { 'l','o','v','e','\0' } ;
    cout<<str3<<endl ;

    // "" used to declare string and '\0 is automatically present at end 
    char str4[] = "aaryan " ;
    // using strlen() to get length
    cout<<str4<<endl ;
    cout<<strlen(str1)<<endl ;
    cout<<strlen(str2)<<endl ;
    cout<<strlen(str3)<<endl ;
    cout<<strlen(str4)<<endl ;
    return 0 ;
}