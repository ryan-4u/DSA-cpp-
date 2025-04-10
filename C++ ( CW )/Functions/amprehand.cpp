#include<iostream>
using namespace std ;
int main()
{
    int a = 5 ;
    int &b = a; // b and a represent same memory location
    b++; //a and b both get updated
    cout<<a<<endl;
    a = a-4; //a got reduced but b also
    cout<<b<<endl;

    cout<<&a<<endl; // memory location is accessed by '&' also
    cout<<&b<<endl; // memory location for a and b is same
    return 0;
}