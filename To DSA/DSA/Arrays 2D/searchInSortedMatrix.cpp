#include<iostream>
using namespace std ;

// approach 01 -> Brute force
void appOne( int  arr[][4], int n,int m,int target ){
    int x = target ;
    bool isPresent = false ;
    for(int i=0 ;i<n; i++){
        for(int j=0 ;j<m; j++){
            if( arr[i][j] == x){
            isPresent = true ;
            }
        }
    }
    if(isPresent==0) cout<<"target not found"<<endl;
    else cout<<"target  found"<<endl;
    return ;
}

// approacg 02 -> row/col wise binary search
void appTwo( int  arr[][4], int n,int m,int target ){
    for( int i=0 l i<n; i++){
        int oLow = arr[i][0] ;
        int oHigh = arr[i][m-1] ;

        while( oLow<=oHigh ){
            int mid = oLow + ((oHigh-oLow)/2) ;
            if( mid == target){
                printf("Target is foumd at arr[%d][")
            }
        } 
    }
}

int main(){
    int arr[4][4] = { {10,20,30,40} , {15,25,35,45} , {27,29,37,48} , {32,33,39,50} } ;
    int target = 33 ;
    appOne( arr,4,4,33);
    return 0 ;
}
