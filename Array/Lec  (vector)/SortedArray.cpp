#include<iostream>
using namespace std ;
int main()
{
    int arr[6] = {1,2,3,0,7,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = -1 ;
    for(int i=1 ; i<size ; i++)
    {
        if(arr[i]<arr[i-1])
        {
           ans = i ;
           cout<<"Not Sorted"<<endl;
           break ;
        }
    }
    if(ans == -1) cout<<"array is Sorted"<<endl ;

    return 0 ;
}