#include <iostream>
using namespace std ;
int main()
{
    int num ;
    cout<<"enter the number : ";
    cin>> num;
    if(num%3 == 0 && num%5 == 0){
            cout<<"the number is : "<< num<<endl;
    }
    else{
        cout << " number doesn't satisty condition"<<endl;
    }
    return 0;
}