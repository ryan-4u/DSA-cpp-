#include<iostream>
#include<limits.h>
using namespace std ;

void countSort( int *arr, int n ){

    int freq[100000];
    int maxVal = INT_MIN , minVal = INT_MAX ;
     
     //first step
    for( int i=0 ; i<n ; i++ ){
        freq[ arr[i] ]++ ;
        maxVal = max( maxVal , arr[i] ) ;
        minVal = min( minVal , arr[i] ) ;
    }

    // second step
    for(int i=minVal , j=0 ; i<=maxVal ; i++){
        while( freq[i]>0){
            arr[j++] = i ;
            freq[i]-- ;
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
    int arr[] = { 1,4,1,3,2,4,3,7 } ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    countSort( arr,n ) ;
}