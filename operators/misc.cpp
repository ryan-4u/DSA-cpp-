#include<iostream>
using namespace std;
int main()
{
    int a=7;
    cout<< sizeof(a) << endl;

    
    bool name ;
    cout<< sizeof(name) << endl;
     
     a==name ? name =true : name =false ;
     cout<<name<<endl;
     cout<< (&a)<< endl;
    
    return 0;
}