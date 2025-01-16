#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your Binary no : ";
    cin>>n;
    int ans = 0;
    int power = 1;
    int lastdigit;
    while(n>0)
    {
         lastdigit = n % 10;
        ans = ans + (lastdigit*power);
        power *= 2;
        n=n/10;
    }
    cout<<"Decimal no "<<ans<<endl;
    return 0;
}