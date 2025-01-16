#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int arr[] = {1,2,5,3,4,3,2,1,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for(int i=0 ; i<size ; i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            if(arr[i] == arr[j])  
            {
                arr[i] = arr[j] = INT_MIN;
            }
        }
    }
    int unique ;
    for(int i =0 ; i<size ;i++)
    {
        if(arr[i] != INT_MIN)
        {
            unique = arr[i] ;
        }
    }
    cout<<"The Unique Element : "<<unique<<endl;
    return 0 ;
}