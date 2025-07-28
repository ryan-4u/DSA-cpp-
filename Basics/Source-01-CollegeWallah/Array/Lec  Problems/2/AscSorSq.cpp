#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void SortedSquareArray(vector<int> &v)
{
    vector<int> ans;
    int lp = 0 ; //left pointer
    int rp = v.size()-1; // right pointer
    while(lp<=rp)
    {
        if(abs(v[lp])<abs(v[rp])){
        ans.push_back(v[rp]*v[rp]);
        rp-- ;
        } else {
            ans.push_back(v[lp]*v[lp]);
            lp++ ;
        }
    }
    reverse(ans.begin(),ans.end());

    
    for(int i=0;i<ans.size();i++)
    {
         cout<<ans[i]<<" ";
    }
    cout<<endl;
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
    SortedSquareArray(v);
    return 0 ;
}