#include<iostream>
#include<aLgorithm>
using namespace std ;

// void swap( int *a , int *b) {
//     int temp = *a ;
//     *a = *b ;
//     *b = temp ;
//     return ;
// }

void bubbleSort( int *arr, int n ){

    for( int outer=0 ; outer<n-1 ; outer++ ){
        bool isSwap = false ;
        for(int i=0 ; i<n-outer-1 ; i++){
            if( arr[i] > arr[i+1] )
            {
                swap( arr[i],arr[i+1]) ;
                isSwap = true ;
            }
        }
        if( !isSwap ){
        break ;
        }
    }
    
    cout<<"The sorted array : ";
    for(int i=0 ; i<n ;i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl ;

    return ;
}

int main() {
    int arr[] = { 5,4,1,3,2 } ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    bubbleSort( arr,n ) ;
}