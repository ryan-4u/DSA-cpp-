#include<iostream>
#include<limits.h>
using namespace std ;

int maxProfit( int *prices, int n){
    int bestBuy[100000] ;
    bestBuy[0] = INT_MAX ;

    cout<<bestBuy[0] ;
    for( int i=1 ; i<n ; i++){
        bestBuy[i] = min( bestBuy[i-1] , prices[i-1] ) ;
        cout<<","<<bestBuy[i] ;
    }
    cout<<endl ;

    int maxProfit = 0 ;
    for(int i=0 ; i<n ; i++ ){
        int currProfit = prices[i] - bestBuy[i] ;
        maxProfit = max( maxProfit,currProfit) ;
    }

    return maxProfit ;
}

int main(){
    int arr[] = { 7,1,5,3,6,4 } ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int x = maxProfit(arr,n) ;
    cout<<"Max profit can be : "<<x<<endl ;

    return 0 ;
}