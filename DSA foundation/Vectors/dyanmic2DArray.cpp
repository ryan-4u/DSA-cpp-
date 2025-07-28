#include<iostream>
using namespace std ;

int main(){
    
    int rows;
    cout<<"Enter rows: ";
    cin>>rows ;
    int cols;
    cout<<"Enter cols: ";
    cin>>cols ;

    // memory allocation
    int ** matrix = new int*[rows] ;
    for(int i=0 ; i<rows ; i++){
        matrix[i] = new int[cols] ;
    }
    // data store
    int x = 1 ;
    for(int i=0 ; i<rows; i++){
        for(int j=0 ; j<cols ; j++){
            matrix[i][j] = x++ ;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl ;
    }
    cout<<endl ;
    return 0 ;
}