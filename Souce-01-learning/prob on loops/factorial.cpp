#include <iostream>
using namespace std;
int main()
{
    int factorial =1;
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      factorial *=i;
    }
    cout<<"factorial of n is : "<<factorial<<endl;
    return 0;
}