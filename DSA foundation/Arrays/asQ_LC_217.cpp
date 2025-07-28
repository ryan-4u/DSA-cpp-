// reture true if duplicate element is present 
// and false if all elements are distinct
#include<iostream>
#include<algorithm>
using namespace std ;

bool isDuplicate(int *arr,int n){
    // can be done if knows sorting
    sort(arr,arr+n);
    for(int i=0 ; i<n ; i++){
        if( arr[i] == arr[i-1] )
        return true ;
    }
    return false ;
}

int main(){
    int arr[] = { 3,5,7,2,9,10,4,1,0} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    bool answer = isDuplicate(arr,n) ;
    if(answer == true) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0 ;
}