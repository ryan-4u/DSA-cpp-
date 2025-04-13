#include<iostream>
using namespace std ;
int main(){
    int arr[2][3] = { {4,7,8},{8,3,7} } ;
    int n = 2 , m = 3 , sum = 0 ;
    for(int i=0 ; i<m; i++){
        sum += arr[1][i] ;
    }
    cout<<"Sum of 2nd row in matrix is: "<<sum<<endl;
    return 0 ;
}