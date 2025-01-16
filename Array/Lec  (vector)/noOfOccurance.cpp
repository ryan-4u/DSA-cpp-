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
    int occur = 0;
    for( int i = v.size()-1 ; i>=0 ; i--)
    {
        if(x == v[i])
        {
            occur++;
        }
    }
    cout<<"NO of occurance of x is : "<<occur<<endl;
    return 0 ;
}