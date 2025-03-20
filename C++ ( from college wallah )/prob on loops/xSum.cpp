#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cout<<"enter number: ";
    cin>>n;
    if(n%2==0){
        sum= -(n/2);
    }
    else{
        sum= -(n/2) +n;
    }
    cout<<"sum of series:"<<sum<<endl;
    return 0;
}