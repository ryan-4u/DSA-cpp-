#include<iostream>
using namespace std ;
int main()
{
    int arr[] = {3,4,5,6,7,8,9};
    int search;
    cout<<"Enter the element needed to searched: ";
    cin>>search;
    int i;
    int ans = -1 ;
    int size = sizeof(arr) / sizeof(arr[0]) ;
    for( i = 0 ; i<size ; i++)
    {
        if(search == arr[i]) 
        {
            search = arr[i];
            ans = i ;
            break;
        }
    
    }

    cout<<"OUTPUT IS : "<<ans<<endl;
    return 0 ;
}  