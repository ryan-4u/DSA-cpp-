#include<iostream>
using namespace std ;
int main()
{
    int z,size,sum;
    cout<<"Enter no of elements in array : ";
    cin>>z;
    int arr[z];
    size = sizeof(arr) / sizeof(arr[0]) ;

    cout<<"Enter elments of array:";
    for(int i=0;i<size ;i++)
    {
        cin>>arr[i];
    }

    sum = 0 ;
    for(int i =0 ; i<size ; i++)
    {
        sum = sum + arr[i] ;
    }
    cout<<"Sum of all elements of array : "<<sum<<endl;
    return 0;
}