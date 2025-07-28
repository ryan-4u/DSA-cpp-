#include<iostream>
using namespace std ;
int main()
{
    int l;//length
    cout<<"Enter length : ";
    cin>>l;
    int b;//breadth
    cout<<"Enter breadth : ";
    cin>>b;
    for(int i=1 ;i<=b ; i++)
    {
        for(int j=1 ;j<=l;j++)
        {
            if( (i==1) || (i==b) || (j==1) || (j==l) ){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}