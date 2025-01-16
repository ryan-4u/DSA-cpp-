#include <iostream>
using namespace std ;
int main()
{
    int n;
    int sum=0 ;
    int i=0 ;
    cout << "Enter your number : ";
    cin>>n;
    do{
        sum = sum + i; 
        i++;
    }while(i<=n);
    cout<<"Sum of first n natural number:"<<sum<<endl;
    return 0;
}