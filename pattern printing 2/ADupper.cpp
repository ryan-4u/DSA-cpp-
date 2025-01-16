#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter no of lines: ";
    cin>>n;
    int i,j,k,l;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        int no_of_chars=2*i-1;
         for(int k=0;k<no_of_chars;k++)
        {
            char ch = (char)('A'+k);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}