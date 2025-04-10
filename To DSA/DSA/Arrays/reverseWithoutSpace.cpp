#include<iostream>
using namespace std ;

void swap(int *a , int *b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
    return ;
}

void reverse(int *arr,int n){
    int start , end ;
    for( start=0,end=n-1 ; start <= end ; start++ ,end--)
    {
        swap(&arr[start],&arr[end]) ;
    }
    cout<<"REverse of the array: ";
    for(int i=0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl ;
    return ;
}

int main(){
    int arr[] = {2,3,4,5,6,7,8} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    reverse(arr,n) ;
    return 0 ;
 }