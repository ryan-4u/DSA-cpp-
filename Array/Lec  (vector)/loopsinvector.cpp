#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    //insertion
    cout<<"Enter elements in vector: ";
    for(int i =0;i<5;i++)
    {
        int element  ;
        cin>>element ;
        v.push_back(element);
    }
    //printing
    // 1. For loop
    for(int i=0 ; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+2,10);
    // 2. For-each loop
    for(int element : v)
    {
        cout<<element<<" ";
    }
    cout<<endl;
    v.erase(v.end()-2);
    // 3. While loop
    int idx = 0 ;
    while( idx < v.size())
    {
        cout<<v[idx++]<<" ";
    }
    cout<<endl;
    return 0;
}
