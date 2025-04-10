#include<iostream>
#include<limits.h>
using namespace std ;

//     # Brute force approach ,  TC = O(n^3)
void maxSubArray(int *arr, int n ){
    int maxSum =  INT_MIN ;
    for(int start=0; start<n ; start++)
    {
        for(int end=start ; end<n ; end++)
        {
            int currSum = 0 ;
            for(int i=start ; i<=end ;i++ )
            {
                currSum += arr[i];
            }
            cout<<currSum<<"  ";
            maxSum = max(maxSum,currSum) ;
        }
        cout<<endl ;
    }
    cout<<"Max subarray sum is: "<<maxSum<<endl;
    return ;
}

//    # slightly optimized brute force approach , TC = O(n^2)
void maxSubArray2(int *arr, int n ){
    int maxSum =  INT_MIN ;
    for(int start=0; start<n ; start++)
    {
        int currSum = 0 ;
        for(int end=start ; end<n ; end++)
        {
            currSum += arr[end] ; 
            maxSum = max(maxSum,currSum) ;
        }
    }
    cout<<"Max subarray sum is: "<<maxSum<<endl;
    return ;
}

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
    maxSubArray(arr,6);
    maxSubArray2(arr,6);
    kadaneAlgorithm(arr,6) ;
    return 0 ;
}


//     # Brute force approach ,  TC = O(n^3)

// #include<iostream>
// #include<limits.h>
// using namespace std ;

// void maxSubArray(int *arr, int n ){
//     int maxSum =  INT_MIN ;
//     for(int start=0; start<n ; start++)
//     {
//         for(int end=start ; end<n ; end++)
//         {
//             int currSum = 0 ;
//             for(int i=start ; i<=end ;i++ )
//             {
//                 currSum += arr[i];
//             }
//             cout<<currSum<<"  ";
//             maxSum = max(maxSum,currSum) ;
//         }
//         cout<<endl ;
//     }
//     cout<<"Max subarray sum is: "<<maxSum<<endl;
//     return ;
// }


// int main(){
//     int arr[6] = {2,-3,6,-5,4,2} ;
//     maxSubArray(arr,6);

//     return 0 ;
// }