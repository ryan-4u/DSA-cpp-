#include<iostream>
using namespace std;
int main()
{
    int a=7 ,b=3;
    
    cout << (a-=2) <<endl;
    a=a%3;
    cout << (a) <<endl;
     cout << (a+=10) <<endl;
    a/=3;
    cout << (a) <<endl;
    
    return 0;
}