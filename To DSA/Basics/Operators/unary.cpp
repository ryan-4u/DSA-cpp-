#include <iostream>
using namespace std ;

int main()
{
    int a=2, b=4, c=6, d=8 ;
    //a++ : first use then increment
    cout<< (a++) <<endl ; //2
    cout<< (a) <<endl ; //3

    //++b : first increment then use
    cout<< (b) <<endl ; //4
    cout<< (++b) <<endl ;//5
 
    //c-- : first use then decrement
    cout<< (c--) <<endl ; //6
    cout<< (c) <<endl ; //5
    
    //--d : first decrement then use
    cout<< (d) <<endl ; //8
    cout<< (--d) <<endl ;//7
    return 0;
}