#include<iostream>
#include<limits>
using namespace std ;

int arrayMinMaxElement( int* arr , int n){
    
    int min = std:: numeric_limits<int>::max() ;
    int max = std:: numeric_limits<int>::min() ;
    int minIdx = -1 , maxIdx = -1 ;
    for(int i=0 ; i<n ; i++ )
    {
        if( arr[i] > max ){
            max = arr[i] ;
            maxIdx = i ;
        }else if( arr[i] < min ){
            min = arr[i] ;
            minIdx = i ;
        }
    }
    cout<<"Minumum element in array is "<<min<<" present at arr["<<minIdx<<"] ..."<<endl ;
    cout<<"Maximum element in array is "<<max<<" present at arr["<<maxIdx<<"] ..."<<endl ;
    return 0 ;
}


int main(){
    int arr[] = {10,23,4,5,75,98,45,23} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    arrayMinMaxElement(arr,n);
    return 0 ;
}