#include<iostream>
#include<vector>
using namespace std ;

int firstOccur(vector <int> arr,int target , int i){

    if( i == arr.size() ){
        return -1 ;
    }
    if( arr[i] == target ){
        return i ;
    }
    return firstOccur( arr , target , i+1 ) ;
}

int main(){
    vector <int> v = { 1,2,3,4,3,5 };
    int target = 3 ;
    cout<<firstOccur(v,target,0)<<endl ;

    return 0 ;
}
