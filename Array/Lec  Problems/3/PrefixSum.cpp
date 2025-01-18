#include<iostream>
#include <vector>
using namespace std ;
int main ()
{
    int n ;
    cout<<"Enter No of elements in array: ";
    cin>>n;
    vector<int> v ;
    cout<<"Enter Elements : ";
    for(int i=0; i<n ;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=1 ; i<n;i++)
    {
        v[i] = v[i] + v[i-1] ;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0 ;
}