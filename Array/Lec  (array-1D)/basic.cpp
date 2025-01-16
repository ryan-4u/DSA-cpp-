#include<iostream>
using namespace std;

int main()
{
    int arr[5]; // declarationm of array
    //initialization of array
    arr[0] = 5 ;
    arr[1] = 6 ;
    arr[2] = 7 ;
    arr[3] = 8 ;
    arr[4] = 9 ;

    int brr[4] = {1,2,3,4}; // declaration + initialization

    cout<<arr[0]<<endl;
    cout<<brr[3]<<endl;

    arr[0] = 0;  //updation in arr
    brr[3] = 13; //updation in brr
    cout<<arr[0]<<endl;
    cout<<brr[3]<<endl;

    int x ;//size of arr
    x = sizeof(arr) ;
    cout<<x<<endl;
    int y ;//length of brr
    y = sizeof(brr)/sizeof(brr[3]);
    cout<<y<<endl;
    return 0;
}