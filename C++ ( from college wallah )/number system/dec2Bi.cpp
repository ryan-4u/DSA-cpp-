#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your decimal no : ";
    cin>>n;
    int ans = 0;
    int power = 1;
    int paritydigit ;
    while(n>0)
    {
        paritydigit = n % 2;
        ans = ans + (paritydigit*power);
        power *= 10;
        n=n/2;
    }
    cout<<"binary no "<<ans<<endl;
    return 0;
}