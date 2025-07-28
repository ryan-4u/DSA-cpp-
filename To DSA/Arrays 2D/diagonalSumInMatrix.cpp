#include<iostream>
using namespace std ;

void diagonalSum( int arr[][3], int n , int m){

    int tSum = 0 ;
    //      # O(n^2)
    // int pSum = 0 , sSum = 0 ;
    // for(int i=0 ; i<n; i++){
    //     for(int j=0 ; j<m ;j++){
    //         if(i == j){
    //             cout<<arr[i][j]<<" ";
    //             pSum += arr[i][j] ;
    //         }
    //         if( j == n-i-1 ){
    //             if( i != j){
    //             cout<<arr[i][j]<<" ";
    //             sSum += arr[i][j] ;
    //             }
    //         }
    //     }
    // }
    // tSum = pSum + sSum ;

    //       # O(n)
    for(int i=0 ; i<n ; i++){
        tSum += arr[i][i] ; // primary diagonal
        if( i != n-i-1){          // 
            tSum += arr[i][n-i-1] ;
        }
    }
    cout<<"Diagonal sum of elements is: "<<tSum<<endl ;
    return ;
}

int main(){
    int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
     
    diagonalSum(arr,3,3) ;
    return 0;
}