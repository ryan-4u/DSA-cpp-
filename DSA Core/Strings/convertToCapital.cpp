#include<iostream>
#include<string.h>
using namespace std ;

void toUpper(char *str , int n ){
    
    for(int i=0 ; i<n ; i++){
        char ch = str[i] ;
        if( ch >='A' && ch <= 'Z'){
            continue ;
        } else{
            str[i] = ch - 'a' + 'A' ;
        }
    }
    return ;
}

void toLower(char *str , int n ){
    
    for(int i=0 ; i<n ; i++){
        char ch = str[i] ;
        if( ch >='a' && ch <= 'z'){
            continue ;
        } else{
            str[i] = ch + 'a' - 'A' ;
        }
    }
    return ;
}

int main(){
    // input -> A to Z and a to z
    char sentence[50] =  "HelloBroTherAAryan" ;
     
    toUpper(sentence,strlen(sentence));
    cout<<"# uppercase output: "<<sentence<<endl ;
    toLower(sentence,strlen(sentence));
    cout<<"# lowercase output: "<<sentence<<endl ;

    return 0 ;
}