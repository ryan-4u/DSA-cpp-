#include<iostream>
using namespace std ;
int main()
{
    int arr[] = { 3,4,5,6,7,8,9} ;
    int size = sizeof(arr) / sizeof(arr[0]);
    // for loop 
    for( int i=0 ; i<size ; i++ )
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // for-each loop 
    for( int ele:arr)
    {
        cout<<ele<<" ";
    }
    cout<<endl ;
    // while loop 
    int index = 0 ;
    while( index<size ) 
    {
        cout<<arr[index]<<" ";
        index++;
    }
    cout<<endl<<endl;
    return 0 ;
}