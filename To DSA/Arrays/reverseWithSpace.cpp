#include<iostream>
using namespace std ;

void reverseWithSpace(int *arr,int n ){
    int brr[n] ;
    for(int i=0; i<n ; i++){
        brr[i] = arr[n-i-1] ;
    }

    cout<<"REverse of the array: ";
    for(int i=0 ;i<n; i++){
        cout<<brr[i]<<" ";
    }
    return ;
}
int main(){
    int arr[5] = { 4,5,6,7,8 } ;
    reverseWithSpace(arr,5) ;
    return 0 ;
}