//A
// B C 
// D E F
// G H I J
#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    char ch = 'A' ;
    for(int i=0 ;i<n ; i++)
    {
        for(int j=0 ;j<=i;j++)
        {
            cout<<ch++<<" ";

        }
        cout<<endl;
    }
}