#include<iostream>
#include <vector>
using namespace std ;

bool CheckPrefixSuffixSum(vector<int> &v)
{                                                //     0  3  4  7  6  8
    int Tsum = 0 ; //TotalSum                    
    int Psum = 0 , Ssum ;//Prefix sum and Suffix sum 
    for(int i=0 ;i<v.size();i++)              
    {
        Tsum += v[i] ;                           //       28
    }
    for(int i=0 ;i<v.size();i++)
    {
        Psum += v[i] ;                           //       14
        Ssum = Tsum - Psum ;                     //       14
        if(Psum == Ssum){
            return true ;
        }  
    }
    return false ;
}

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
    cout<<CheckPrefixSuffixSum(v)<<endl;
    return 0 ;
}