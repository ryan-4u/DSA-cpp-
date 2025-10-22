#include<iostream>
using namespace std ;

int main(){
    // int arr[] = {1,2,3,4,5};
    int size;
    cout<<"Enter size: ";
    cin>>size ;
    int *arr = new int[size] ;

    int x = 1 ;
    for( int i=0 ; i<size ; i++){
        arr[i] = x;
        cout<<arr[i]<<" ";
        x++ ;
    }
    cout<<endl ;
    delete[] arr ;
    return 0 ;
}