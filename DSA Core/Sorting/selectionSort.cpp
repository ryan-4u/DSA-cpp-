#include<iostream> 
#include<algorithm>
using namespace std;

//OMG -> i improved the code
void selectionSort(int arr[],int n){

    for(int i=0;i<n;i++){
        int* minEle = min_element(arr+i,arr+n) ;
        swap(arr[i],*minEle);
    }    
    cout<<"sorted array elements are: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";    
    }
    cout<<endl;
}

int main(){
    int n ;
    cout<<"Enter no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter your array elements:";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Entered array elements are: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr,n);

    return 0 ;
}




// #include<iostream>
// using namespace std ;

// void selectionSort( int *arr, int n ){

//     for( int i=0 ; i<n-1 ; i++ ){
//         int minIdx = i ;
//         for( int j= i+1 ; j<n ;j++){
//             if( arr[j] < arr[minIdx] ){
//                 minIdx = j ;
//             }
//         }
//         swap( arr[minIdx] , arr[i] ) ;
//     }
    
//     cout<<"The sorted array : ";
//     for(int i=0 ; i<n ;i++){
//         cout<<arr[i]<<" " ;
//     }
//     cout<<endl ;

//     return ;
// }

// int main() {
//     int arr[] = { 5,4,1,3,2 } ;
//     int n = sizeof(arr) / sizeof(arr[0]) ;
//     selectionSort( arr,n ) ;
// }