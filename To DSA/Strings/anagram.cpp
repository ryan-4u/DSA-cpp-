#include<iostream>
#include<string> // to use string class 
using namespace std ;

bool isAnagram( string str1 , str str2){
    if( str1.length() != str2.length() ){
        cout<<"they are NOT valid anagrams..."<<endl;
        return false ;
    }

    int count[26] = {0} ;
    

}
int main()
{
    string str1 = "theeyes"; 
    string str2 = "theysee" ;
    isAnagram(str1,str2);
     
    return 0  ;
}