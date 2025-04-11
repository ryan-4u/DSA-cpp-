#include<iostream>
using namespace std ;
int main()
{
    // intialization
    int arr1[3][2] = { {3,2},{4,1},{0,2} } ;
    int arr2[3][4] ;
    //inpuing arr2 elements
    cout<<"Enter array 2 elements: ";
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ;j++){
            cin>>arr2[i][j] ;
        }
    }
    cout<<endl;
    // output of arr2 elements
    cout<<"All array 2 elements: "<<endl;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ;j++){
            cout<<arr2[i][j]<<" " ;
        }
        cout<<endl;
    }
    cout<<endl ;    

    return 0 ;
}