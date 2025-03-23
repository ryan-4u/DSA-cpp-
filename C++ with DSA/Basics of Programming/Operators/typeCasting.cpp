#include <iostream>
using namespace std ;

int main()
{
    // implicit conversion
    cout<< (10/3) << endl ;
    cout<< (10/3.0) << endl ;
    cout<< ('A'+1) <<endl ;
    // explicit conversion
    cout<< (int)('a') << endl ;
    int PI = 3.14 ;
    cout<< (int)(PI) << endl ;
    cout<< ((float)10/3) << endl ;
    cout<< (char)('A'+1) << endl ;
    //practice question
    cout<< (bool)3 + 2 << endl ;
    cout<< (23.5 + 2 + 'A') << endl ;
    return 0;
}