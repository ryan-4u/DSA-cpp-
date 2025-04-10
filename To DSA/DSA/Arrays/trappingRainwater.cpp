// leetcode - 42 # hard
#include<iostream>
#include<limits.h>
using namespace std ;

int trappedRainWater( int *height , int n ){
    int leftMax[20000];
    leftMax[0] = INT_MIN ;
    cout<<leftMax[0];
    for( int i=1 ; i<n ; i++){
        leftMax[i] = max( leftMax[i-1] , height[i-1] ) ;
        cout<<","<<leftMax[i] ;
    }
    cout<<endl;

    int rightMax[20000];
    rightMax[n-1] = INT_MIN ;
    cout<<rightMax[n-1];
    for( int i=n-2 ; i>=0 ; i--){
        rightMax[i] = max( rightMax[i+1] , height[i+1] ) ;
        cout<<","<<rightMax[i] ;
    }
    cout<<endl;

    int totalTrapped = 0 ;
    int currTrapped;
    // water can not be trapped at first and last bar , so wasn't included 
    for(int i=1 ;i<n-1 ; i++){
        currTrapped = min( leftMax[i],rightMax[i]) - height[i] ;
        if(currTrapped<0){
            currTrapped = 0 ;
        }
        cout<<currTrapped<<"," ;
        totalTrapped += currTrapped ;
    }
    cout<endl;
    
    return totalTrapped ;
}

int main(){
    int height[] = { 5,4,3,2,1,0 } ;
    int n = sizeof(height) / sizeof(height[0]) ;
    int x = trappedRainWater(height,n) ;
    cout<<"Total trapped rainwater: "<<x<<endl ;
}