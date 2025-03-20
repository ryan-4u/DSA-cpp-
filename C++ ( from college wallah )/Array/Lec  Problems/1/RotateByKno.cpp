 // rotating an array by k WITHOUT using extra array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main()
{
    vector<int> v = {1,2,3,4,5} ;
    int k ;
    cout<<"Enter K : ";
    cin>>k ;
    k = k%v.size();
       cout<<"Original array :";
    for(int i=0 ; i<v.size() ;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
       cout<<"Rotated array :";
    for(int i=0 ; i<v.size() ;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0 ;
}