#include<iostream>
using namespace std ;

int rotatedSortedArray(int *arr, int n , int target){
    int mid ;
    int low = 0 , high = n-1 ;
    while(low<=high){
        mid = low + (( high-low)/2) ;
        
        if( arr[mid] == target ){
            return mid ;

        } else if( arr[low] <= arr[mid] ){

            if( target>=arr[low] && target<=arr[mid]){
                high = mid - 1 ;
            } else {
                low = mid + 1 ;
            }

        } else {
            
            if( target>=arr[mid] && target<=arr[high]){
                low = mid + 1 ;
            } else {
                high = mid - 1 ;
            }
        
        }
    }

    return -1 ;
}

int main(){
    int arr[] = { 4,5,6,7,8,0,1,2} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int target = 0 ;

    int x = rotatedSortedArray(arr,n,target) ;
    cout<<"answer: "<<x<<endl ;
}