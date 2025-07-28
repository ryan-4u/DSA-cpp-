#include <iostream>
using namespace std ;
int main()
{
    int num ;
    cout<<"enter the number : ";
    cin>> num;
    if(num%2 == 0){
        if(num%3 == 0){
            cout<< num << endl;
        }
        else{
            cout<<" number doesn't satisty condition"<<endl;
        }
    } 
    else{
        cout << " number doesn't satisty condition"<<endl;
    }
    return 0;
}