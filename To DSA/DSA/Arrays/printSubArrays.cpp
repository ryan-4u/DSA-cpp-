#include<iostream>
using namespace std ;
 
void printSubArray(int *arr , int n){

    //printing all start and end value cobination possible
    //outer loop(start) -> 0 to n
    // for(int start=0; start<n ; start++)
    // {
    //     // inner loop(end) -> start to n-1
    //     for(int end=start ; end<n ; end++)
    //     {
    //         cout<<"("<<start<<","<<end<<")  ";
    //     }
    //     cout<<endl ;
    // }    

    // now if we print every elements with usinbg start end value
    for(int start=0; start<n ; start++)
    {
        for(int end=start ; end<n ; end++)
        {
            for(int i=start ; i<=end ;i++ )
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl ;
    }
    return ;
}

int main(){
    int arr[] = {1,2,3,4,5} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    
    printSubArray(arr,n) ;

    return 0 ;
}