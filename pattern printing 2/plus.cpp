#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter no of lines: ";
    cin>>n;
    int i,j,k,l;
    for(i=1;i<=((n-1)/2);i++)
    {
      for(j=1;j<=((n-1)/2);j++)
      {
          cout<<"  ";
      }
      cout<<"* "<<endl;
    }

     for(i=1;i<=n;i++)
     {
         cout<<"* ";
     }
     cout<<endl;

    for(i=1;i<=((n-1)/2);i++)
    {
      for(j=1;j<=((n-1)/2);j++)
      {
          cout<<"  ";
      }
      cout<<"* "<<endl;
    }
    
    
    return 0;
}