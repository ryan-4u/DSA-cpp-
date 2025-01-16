#include <iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter rectangle length : ";
    cin>>l;
    cout<<"Enter rectangle breadth : ";
    cin>>b;
    for(int i=1;i<=b;i++){
      for(int j=1;j<=l;j++){
          cout<<"*  ";
      }
        printf("\n");
    }
    return 0;
}