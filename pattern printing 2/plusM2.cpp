#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter no of lines: ";
    cin>>n;
    int i,j,k,l;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n/2 || j==n/2)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}