#include<iostream>
using namespace std ;
int main()
{
    int z,size,max;
    cout<<"Enter no of elements in array : ";
    cin>>z;
    int arr[z];
    size = sizeof(arr) / sizeof(arr[0]) ;

    cout<<"Enter elments of array:";
    for(int i=0;i<size ;i++)
    {
        cin>>arr[i];
    }

    max = arr[0] ;
    for(int i =0 ; i<size ; i++)
    {
        if(max < arr[i]) max = arr[i] ;
    }
    cout<<"max value of all elements of array : "<<max<<endl;
    return 0;
}