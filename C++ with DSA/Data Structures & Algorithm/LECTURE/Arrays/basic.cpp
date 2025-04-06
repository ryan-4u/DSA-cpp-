#include<iostream>
using namespace std ;
int main() {
    // declaration and initialisation 
    // int arr1[50]; // array declaration ( stores garbage value)
    // int arr2[50] = {1,2,3} ; // first 3 are initialised & remaining got intialised as 0 automatically
    // int arr[] = {1,2,3,4,5,6,7,8,9};//size = no of elements initialised
    
    // // length of array
    // int n = sizeof(arr)/sizeof(arr[0]) ;
    // cout<<n<<endl;

    // // output of array
    // for(int i=0 ; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // input in array
    int m ;
    cout<<"Enter length of array: " ;
    cin>>m ;
    int age[m];
    cout<<"Enter elements of array: " ;
    for(int i=0 ; i<m; i++){
        cin>>age[i] ;
    }
    for(int j=0 ; j<m; j++){
        cout<<age[j]<<" ";
    }
    cout<<endl;

    return 0;
}