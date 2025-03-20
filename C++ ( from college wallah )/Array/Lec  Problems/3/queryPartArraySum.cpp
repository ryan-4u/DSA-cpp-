//given an array of integers of size n .
//Answer n queries where you need to print
//the sum of values in a given range of 
//indexes from l to r (both included)
//Note: the value of l & r follow 1-based index
#include<iostream>
#include <vector>
using namespace std ;
 
int main ()
{
    int n ;
    cout<<"Enter No of elements in array: ";
    cin>>n;
    vector<int> v(n+1,0) ;
    cout<<"Enter Elements : ";
    for(int i=1; i<n ;i++)
    {
        cin>>v[i];
    }   
    for(int i=1; i<n ;i++)
    {
        v[i]+=v[i-1];
    }
    
    return 0 ;
}