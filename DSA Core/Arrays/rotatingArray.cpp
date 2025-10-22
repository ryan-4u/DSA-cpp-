#include<iostream>
using namespace std ;

int main(){
    int arr[5] = {0,1,2,3,4};
    int k = 2 ;
    int brr[5] ;
    int n = 5 ;

    for( int i=0 ; i<5 ; i++){

        if(i>=k){
            brr[i] = arr[i-k] ;
        } else {
            brr[i] = arr[i+n-k];
        }
    } 
    cout<<"Array before rotation: "<<endl ;
    for(int i=0 ;i<5; i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
    cout<<"Array after rotation: "<<endl ;
    for(int i=0 ;i<5; i++){
        cout<<brr[i]<<" " ;
    }
    cout<<endl ;
}