#include<iostream>
using namespace std ;
void changeValue(int z)
{
    z=100;
    return ;
}
int main()
{
    int a = 5 ;
    changeValue(a);
    cout<<a<<endl;
    return 0;
}