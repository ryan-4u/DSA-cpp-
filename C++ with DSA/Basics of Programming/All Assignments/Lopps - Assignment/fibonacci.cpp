#include<iostream>
using namespace std ;
int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num ;

    int first=0 , second=1 ;
    cout<<first<<" "<<second<<" ";
    for(int i=1 ;i<=num;i++)
    {
        int third = first + second ;
        cout<<first+second<<" ";
        first = second ;
        second = third ;
    }
    printf("\n");
    return 0 ;
}