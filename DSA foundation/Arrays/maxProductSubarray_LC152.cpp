#include<iostream>
#include<limits.h>
using namespace std ;

//       #Kadane's algorithm , TC = O(n)
void kadaneAlgorithm(int *arr, int n ){
    int currSum = 0 ;
    int maxSum = INT_MIN ;
    for(int i=0 ; i<n ; i++){
        currSum += arr[i] ;
        maxSum = max(maxSum,currSum) ;
        if( currSum<0 ) currSum=0 ;
    }
    cout<<"Max subarray sum is: "<<maxSum<<endl;
    return ;
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2} ;
    // maxSubArray(arr,6);
    // maxSubArray2(arr,6);
    kadaneAlgorithm(arr,6) ;
    return 0 ;
}