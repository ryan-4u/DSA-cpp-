#include<iostream>
#include<string.h>
using namespace std ;

void reverse( char* str , int n){

    int start = 0 , end = n-1 ;
    while( start <= end ){
        swap( str[start++] , str[end--] ) ;
        
    }
    return ;
}

int main(){
    
    char str[] = "code" ;
    cout<<str<<endl;    
    reverse(str,strlen(str)) ;
    cout<<str<<endl;
}