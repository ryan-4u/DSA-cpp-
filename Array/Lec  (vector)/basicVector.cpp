#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector<int>v ;    //initializatin
    cout<<"Size : "<<v.size()<<endl;    //v.size()
    cout<<"Capacity : "<<v.capacity()<<endl;  //v.capacity()

    v.push_back(1);                  //v.push_back
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(2);
   cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(3);
   cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.resize(5);                           //v.resize()
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.pop_back();                      //v.pop_back
    v.pop_back();
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.insert(v.begin()+1,7);       //v.insert + v.begin
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.insert(v.end()-1,9);          //v.insert + v.end
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.erase(v.begin()+2);             //v.erase + v.begin
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.erase(v.end()-2);             //v.erase + v.end
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.clear();                   //v.clear()
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    return 0;
}