#include<iostream>
using namespace std ;
int main()
{
    int arr[] = {6 , 4 , 7 , 34 , 2 , 3 , 6 };
    int n = sizeof(arr)/sizeof(arr[0]) ;
    int max = -1 ;

    for(int i=0 ; i<n ; i++ ){
        if( arr[i]>max){
            max = arr[i] ;
        } 
    }
    cout<<"Largest element of the array: "<<max<<endl ;

}