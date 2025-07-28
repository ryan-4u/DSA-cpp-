#include<iostream>
using namespace std ;

int binarySearch(int *arr , int n, int key){
    int start = 0 ;
    int end = n-1 ;
    while(start<=end){

        int mid = ( start + end ) / 2 ;
        if( arr[mid] == key){
            return mid ;
        } else if( arr[mid] > key ){
            end = mid - 1 ;
        } else {
            start = mid+1 ;
        }
    }
    return -1 ;
}

int main(){
    // array must be sorted for binary search
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int key = 14;
    int x = binarySearch(arr,n,key);
    if( arr[x]==key ) cout<<"Element is present at arr["<<x<<"]"<<endl ;
    else cout<<"element is not present in array" <<endl;
    return 0 ;
}