// leetcode 125
#include<iostream>
#include<string.h>
using namespace std ;

bool validPalindrome( char* str , int n){

    int start = 0 , end = n-1 ;
    while( start <= end ){
        if( str[start++] != str[end--] ){
            return false ;
        }
    }
    return true ;
}

int main(){
    
    char str[] = "racecar" ;
     
    bool z = validPalindrome(str,strlen(str)) ;
    if( z == 1 ) cout<<"A valid palindrome"<<endl ; 
    else cout<<"Not a valid palindrome"<<endl ; 

    return 0 ;
}