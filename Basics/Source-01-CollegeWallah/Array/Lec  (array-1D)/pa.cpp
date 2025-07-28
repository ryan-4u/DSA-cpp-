#include<iostream>
using namespace std ;
char whowin(int &n,int &a = 1,int &b = n)
{
    
    return output ;
}

int main()
{
    int trial,x;
    cout<<"Total trials :";
    cin>>trial;
    for(int x=1; x<+trial; x++)
    {
        int a,b,n;
        int result ;
        cout<<"Enter No of lilypads :";
        cin>>n;
        cout<<"Enter position of ALice :";
        cin>>a;
        cout<<"Enter position of bob :";
        cin>>n;
        if(a==b || a<0 || b>n)  cout<<"re-enter valid inputs"<<endl;
        else 
        {
            result = whowin(a,b,n);
        }
        if(result == 'y') cout<<"yes";
        else cout<<"No";
    }
    return 0;
}