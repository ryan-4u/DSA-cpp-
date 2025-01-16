  // rotating an array by k with using extra array
#include<iostream>
using namespace std ;
int main()
{
    int arr[] = {1,2,3,4,5} ;
    int size = sizeof(arr) / sizeof(arr[0]) ;
    int k ;
    cout<<"Enter K : ";
    cin>>k ;
     
    k = k%size ;
     
    cout<<"Original array :";
    for(int i=0 ; i<size ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int j= 0 ;
    int brr[size] ;
    for(int i=size-k ;i<size ;i++)
    {
        brr[j++] = arr[i];
    }
    for(int i=0 ;i<=k ;i++)
    {
        brr[j++] = arr[i];
    }
    cout<<"Rotated array :";
    for(int i=0 ; i<size ;i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    return 0 ;
}