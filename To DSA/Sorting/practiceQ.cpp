#include<iostream>
using namespace std ;

void charInsertionSort( char *arr, int n ){

    for( int i=1 ; i<n ; i++){
        int curr = arr[i] ; // to soet first of unsorted element
        int prev = i-1 ; // to run backward loop

        while( prev>=0 && arr[prev] < curr){
            swap( arr[prev] , arr[prev+1] ) ;
            prev-- ;
        }
        // now prev = -1 -> if loop run completely
        //        or a value less than the right posn to insert our curr
        arr[prev + 1] = curr ;   
    }
    
    cout<<"The sorted array : ";
    for(int i=0 ; i<n ;i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl ;

    return ;
}

int main() {
    char arr[] = { 'f','b','c','a','e','d' } ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    charInsertionSort( arr,n ) ;
}