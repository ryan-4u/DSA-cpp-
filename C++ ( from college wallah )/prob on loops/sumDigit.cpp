#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int sum=0;
    cout<< "Enter your number : ";
    cin>>n;
    while(n>0){
        m=n%10;
        sum =sum+ m;
        n =n/10;
    }
    cout<< sum <<endl;
    return 0;
}