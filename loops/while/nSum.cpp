#include <iostream>
using namespace std ;
int main()
{
    int n;
    int sum=0 ;
    int i=1 ;
    cout << "Enter your number : ";
    cin>>n;
    while(i<=n){
        sum =sum + i;
        i++;
    }
    cout<<"Sum of first n natural number:"<<sum<<endl;
    return 0;
}