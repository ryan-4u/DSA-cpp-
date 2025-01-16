#include <iostream>
using namespace std;
int main(){
    int c,r;
    cout<< "Enter rows : ";
    cin>>r;
    cout<<"enter column : ";
    cin>>c;
    for(int i=1;i<=c;i++) 
    {
      for(int j=1;j<=r;j++)
      {
          if(i == 1||i == c||j == 1||j == r)
          {
          cout<<"* ";
          }
          else
          {
           cout<<"  ";
          }
      } 
      cout<<endl;
    }
    return 0;
}
