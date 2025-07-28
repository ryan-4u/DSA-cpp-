#include<iostream>
using namespace std ;
int main(){
    int arr[4][3] = { {4,7,8},{3,7,7},{4,7,8},{3,7,7} } ;
    int count7 = 0 ;
    int n = 4 , m = 3 ;
    for(int i=0 ; i<n; i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == 7){
                count7++ ;
            }
        }
    }
    cout<<"No of 7 in matrix is: "<<count7<<endl;
    return 0 ;
}