// #include<iostream>
// #include<climits>
// using namespace std ;
// int MaxEleIdx(int arr[],int lenght)
// {
//     int max = INT_MIN ;
//     int maxidx = -1 ;
    
//     for(int i = 0 ; i<lenght ;i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i] ;
//             maxidx = i ;
//         }
//     }
//     return maxidx ;
// }

// int main()
// {
//     int arr[] = {1,2,3,8,3,5,9,7,5};
//     int size = sizeof(arr) / sizeof(arr[0]) ;
//     int maxIndex = MaxEleIdx(arr,9) ;
//     arr[maxIndex] = -1 ;
    
//     int secmaxIndex = MaxEleIdx(arr,9) ;
//     int secLargest = arr[secmaxIndex] ;
//     cout<<"The second largest element of the array: "<<secLargest<<endl;
//     return 0 ;
// }
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12,34,67,85,90,54,32,64};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Variables to store the largest and second largest elements
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Single pass to find both largest and second largest
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            // Update second largest before updating largest
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            // Update second largest only if it's smaller than the current element
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
    } else {
        cout << "The second largest element of the array: " << secondLargest << endl;
    }

    return 0;
}
