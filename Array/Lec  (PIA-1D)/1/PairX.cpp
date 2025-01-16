#include<iostream>
using namespace std ;
int main()
{
    int x ;
    cout<<"Enter Given number : ";
    cin>>x ;
    int arr[] = {0,1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]) ;
    int pair=0 ;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for(int i=0 ; i<size ; i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            if(arr[i]+arr[j] == x)  
            {
                pair++ ;
            }
            
        }
    }
    cout<<"Total pairs: "<<pair<<endl;
    return 0 ;
}