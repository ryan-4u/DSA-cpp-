#include<iostream>
#include<string> // to use string class 
using namespace std ;
int main()
{
    string str1 = "Hello ";
    cout<<str1<<endl;
    string str2 ;
    str2 = "Aaryan " ;
    cout<<str2<<endl;
    // string str3 ;
    // getline(cin,str3) ;
    // cout<<str1<<str2<<str3<<endl;
    string str4 = " i love you jaan..." ;
    for( char ch: str4){
        cout<<ch;
    }
    cout<<endl ;

    // using member function
        cout<<str2.at(3)<<endl;
        cout<<str1.substr(1,3)<<endl;
        cout<<str4.find("jaan")<<endl;

    return 0  ;
}