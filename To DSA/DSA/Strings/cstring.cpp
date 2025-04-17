#include<iostream>
#include<cstring>
using namespace std ;

int main(){
    // not allowed ->
        // char str1[100];
        // str1 = "apnaCollege" ;
    // so we do this 
        char str1[100]; 
        strcpy(str1,"Apna college") ;
        cout<<str1<<endl ;
        char str2[100] = {"Love To "} ;
    // strcat function
        strcat(str2,str1) ;
        cout<<str2<<endl ;
    //strcmp func
        char str3[]= "Love";
        char str4[]= "aaryan" ;
        char str5[]= "aaryan" ;
        cout<<strcmp(str2,str3)<<endl ;
        cout<<strcmp(str4,str5)<<endl ;
        cout<<strcmp(str1,str5)<<endl ;
        
        return 0 ;    
}