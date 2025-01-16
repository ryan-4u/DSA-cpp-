#include<iostream>
using namespace std ;
int main()
{
    int x ;
    cout<<"Enter Given number : ";
    cin>>x ;
    int arr[] = {3,2,1,4,0,6,0};
    int size = sizeof(arr) / sizeof(arr[0]) ;
    int triplet = 0 ;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for(int i=0 ; i<size ; i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            for(int k=j+1 ; k<size ; k++)
            {
                if(arr[i]+arr[j]+arr[k] == x)  
                {
                    triplet++ ;
                }
            }
        }
    }
    cout<<"Total triplets: "<<triplet<<endl;
    return 0 ;
}