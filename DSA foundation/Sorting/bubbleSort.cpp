#include<iostream>
#include<algorithm>

using namespace std;

// one thing to remember -> 
// if no swap then already sorted : make code based on it
void bubbleSort(int arr[],int n){
    for(int x=0; x<n;x++){
        bool isSwap = false ;
        for(int i=1 ; i<n-x;i++){
            if(arr[i]<arr[i-1]){
                swap(arr[i],arr[i-1]);
                isSwap = true
            }
        }
        if( !isSwap){
            break;
        }
    }
    
    
    cout<<"Elements after swapping: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

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
    bubbleSort(arr,n);

    return 0 ;
}
