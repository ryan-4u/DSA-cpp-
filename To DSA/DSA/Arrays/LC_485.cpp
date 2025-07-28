#include<iostream>
using namespace std ;

int main(){
    int arr[6] = {1,0,0,1,1,0} ;
    int size = sizeof(arr) / sizeof(arr[0]) ;
    int max_count = 0 , count = 0 ;
    for( int i=0 ; i< size ; i++){
        if( arr[i] == 1 ){
            count++;
            if( count > max_count){
                max_count = count ;
            }
        } 
        else {  
            count = 0 ;
        } 
    }
    cout<<"Max consecutive 1's are "<<max_count<<endl;

    return 0 ;
}