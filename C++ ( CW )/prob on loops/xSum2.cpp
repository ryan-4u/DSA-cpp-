#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
      if(i%2==0)
        {
           sum-=i;
        }
      else
        {
           sum +=i;
        }
    }
    cout<<"sum of series:"<<sum<<endl;
    return 0;
}