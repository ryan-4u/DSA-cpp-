#include <iostream>
using namespace std ;
int main(){
    int n=50;
    int i=1;
    while(i<=n)
    {
        if(i%3 == 0)
        {
            i++;
            continue;
        }
        cout<<i<<endl ;
        i++;
    }
    return 0;
}