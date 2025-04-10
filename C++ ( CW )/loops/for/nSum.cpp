#include <iostream>
using namespace std ;
int main()
{
    int n;
    int sum=0 ;
    cout << "Enter your number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum =sum + i;
    }
    cout<<"Sum of first n natural number:"<<sum<<endl;
    return 0;
}