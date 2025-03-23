#include <iostream>
using namespace std ;

int main()
{
    int a = 5 ;
    // '='
    int b = a ;
    cout<< (b) <<endl ;
    // '+='
    cout<< (b+=5) <<endl ;
    // '-='
    cout<< (b-=5) <<endl ;
    // '*='
    cout<< (b*=5) <<endl ;
    // '/='
    cout<< (b/=5) <<endl ;
    return 0;
}