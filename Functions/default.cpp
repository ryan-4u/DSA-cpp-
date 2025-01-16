#include<iostream>
using namespace std;
int add(int x, int y=5 , int z=10)
{
    int plus ;
    plus = x+y+z ;
    return plus ;
}
int main()
{
    cout<<add(5)<<endl;
    cout<<add(5,15)<<endl;
    cout<<add(5,15,25)<<endl;
     
    return 0 ;
}