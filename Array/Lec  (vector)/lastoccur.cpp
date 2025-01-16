#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector<int> v;
    //insertion
    cout<<"Enter elements in vector: ";
    for(int i =0;i<8;i++)
    {
        int element  ;
        cin>>element ;
        v.push_back(element);
    }
    int x;
    cout<<"Enter element x: ";
    cin>>x;
    int ans =-1;
    for( int i = v.size()-1 ; i>0 ; i--)
    {
        if(x == v[i])
        {
            ans = i ;
            break;
        }
    }
    if(ans == -1) cout<<"Element is not in array"<<endl;
    else cout<<"Lat occurance of x is at index ["<<ans<<"]"<<endl;
    return 0 ;
}