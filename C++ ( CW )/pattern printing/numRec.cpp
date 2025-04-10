#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter no of lines: ";
    cin>>n;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<j<<"  ";
        }
        for(k=1;k<=i-1;k++)
        {
            cout<<k<<"  ";
        }
        cout<<endl;
    }
    return 0;
}