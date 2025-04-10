#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int rev=0;
    cout<< "Enter your number : ";
    cin>>n;
    while(n>0){
        m=n%10;
        rev = rev*10 + m;
        n =n/10;
    }
    cout<< rev <<endl;
    return 0;
}