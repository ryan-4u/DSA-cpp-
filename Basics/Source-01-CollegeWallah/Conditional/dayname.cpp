#include <iostream>
using namespace std ;
int main()
{
    int num ;
    cout<<"enter the number(1-7) : ";
    cin>> num;
    switch(num){
        case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"tuesday"<<endl;
        break;
        case 3:
        cout<<"wednesday"<<endl;
        break;
        case 4:
        cout<<"thrusday"<<endl;
        break;
        case 5:
        cout<<"friday"<<endl;
        break;
        case 6:
        cout<<"satueday"<<endl;
        break;
        case 7:
        cout<<"sunday"<<endl;
        default:
        cout<<"Number is out of range"<<endl;
    }
    return 0;
}