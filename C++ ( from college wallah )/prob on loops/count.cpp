#include <iostream>
using namespace std;
int main()
{
    int num;
    int count;
    cout<< "Enter your number : ";
    cin>>num;
    for(count =0;num>0;count++)
    {
      num =num/10;    
    }
    cout<<count<<endl;
    return 0;
}