#include<iostream>
using namespace std ;
//function
char nxtCharacter(char x){
    char ch = x + 1 ;
    return ch ;
}
//main
int main(){
    char ch ;
    cout<<"Enter character: ";
    cin>>ch;
    cout<<"Next charcter is "<<nxtCharacter(ch)<<endl;
    return 0 ;
}