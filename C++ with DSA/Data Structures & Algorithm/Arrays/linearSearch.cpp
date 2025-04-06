#include<iostream>
using namespace std ;

int linearSearch(int *arr, int n, int key) 
{
    bool isKey = false ;
    
    for(int i=0; i<n ; i++){
        if( arr[i] == key){
            isKey = true ;
            return i ;
        }
    }
    return -1 ;
}
int main()
{
    int key = 13 ;
    int arr[] = {2,4,6,8,10,12,14,16} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
            // #Linear search without function
    // bool isKey = false ;
    // int idx = -1 ;
    // for(int i=0 ; i<n ; i++){
    //     if( arr[i] == key ){
    //         isKey = true ;
    //         idx = i ;
    //         break ;
    //     }
    // }

    // if( isKey==1 ) cout<<"Key: "<<key<<" is present at arr["<<idx<<"]"<<endl;
    // else cout<<"Key: "<<key<<" is not presentat arr["<<idx<<"]"<<endl;

    int check = linearSearch(arr,n,key) ;
    if( arr[check] == key) cout<<"Key: "<<key<<" is present at arr["<<check<<"]"<<endl ;
    else cout<<"Key: "<<key<<" is not present" <<endl ;
    return 0 ;
}