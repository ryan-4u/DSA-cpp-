#include<iostream>
#include<string.h>
using namespace std ;
int main() {
    // using cin -> character after whitespace are ignored
    char word[30] ;
    cout<<"Input your word: ";
    cin>>word ;
    cout<<"your word is:"<<word<<endl ;
    cout<<"Length: "<<strlen(word)<<endl ;
    // using function -> getline(array_name,input_size,di_limiter)
    char sentence[50] ;
    cout<<"Input your sentence: ";
    cin.getline( sentence , 40 , '.') ;
    cout<<"your sentence is:"<<sentence<<endl ;
    cout<<"Length: "<<strlen(sentence)<<endl ;

    return 0 ;
}