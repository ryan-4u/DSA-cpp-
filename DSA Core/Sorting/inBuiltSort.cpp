#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
    int arr[7] = {3,6,8,2,4,1,7};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    
    sort(arr , arr+n);
    cout<<" array right now is: ";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}