// transpose of a matrix 
#include<iostream>
using namespace std ;

void getTranspose( int arr[4][4] , int n){
     
    for(int i=0 ; i<n ; i++){
        for(int j=0;j<=i ; j++ ){
            if( i != j){
                swap( arr[i][j] , arr[j][i] ) ;
            }
        }
    }

    cout<<"Transposed matrix is:"<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++ ){
            cout<<arr[i][j]<<" " ;
        }
        cout<<endl ;
    }

    return ;
} 

int main(){
    int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} } ;
    int arr2[4][4] = { {0,1,2,3} , {4,5,6,7} , {8,9,10,11} , {12,13,14,15} } ;
    int n = 4 ;
    cout<<"The original matrix is:"<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0;j<n ; j++ ){
            cout<<arr2[i][j]<<" " ;
        }
        cout<<endl ;
    }
    getTranspose(arr2,4) ;

    return 0 ;
}