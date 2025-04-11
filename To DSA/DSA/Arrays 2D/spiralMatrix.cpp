#include<iostream>
using namespace std ;

void spiralMatrix( int arr[][4], int n , int m){
    int sRow = 0 , eRow = n-1 , sCol = 0 , eCol = m-1 ;

    while( sRow<=eRow && sCol<=eCol ){
        //top
        for( int i=sCol ; i<=eCol ; i++){
            cout<<arr[sRow][i]<<" " ;
        }
        sRow++ ;
        //right
        for(int i=sRow ; i<=eRow ; i++){
            cout<<arr[i][eCol]<<" ";
        }
        eCol-- ;
        //bottom
        for(int i=eCol ; i>=sCol ; i--){
            cout<<arr[eRow][i]<<" ";
        }
        eRow-- ;
        //left
        for(int i=eRow ;i>=sRow;i--){
            cout<<arr[i][sCol]<<" ";
        }
        sCol++ ;
    }
    cout<<endl ;
    
    return ;
}

int main(){
    int arr[][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12} , {13,14,15,16} };
     
    spiralMatrix(arr,4,4) ;
    return 0;
}