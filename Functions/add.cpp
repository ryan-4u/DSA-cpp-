#include<iostream>
using namespace std;
int add(int x, int y)
{
    int plus ;
    plus = x+y ;
    return plus ;
}
int main()
{
    int a,b,sum;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    sum = add(a,b);
    cout<<"The sum is "<<sum<<endl;
    return 0 ;
}