//sort an array consisting of 0 and 1's
#include<iostream>
#include<vector>
using namespace std ;

void sortZeroesandOnes(vector<int> &v)
{
    int lp=0,rp=v.size()-1;//lp is left pointer and rp is right pointer
    while(lp<rp)
    {
        if(v[lp]==1 && v[rp]==0)
        {
            v[lp++]=0 ;
            v[rp--]=1 ;
        } 
        else if(v[lp]==0) lp++;
        else if(v[rp]==1) rp--;
        else if(v[lp]==0 && v[rp]==1) continue ;
    }
     return ;
}

int main()
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
    sortZeroesandOnes(v);

     for(int i=0;i<n;i++)
     {
         cout<<v[i]<<" ";
     }
     cout<<endl;
     return 0 ;
}