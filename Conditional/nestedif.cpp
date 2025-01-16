#include <iostream>
using namespace std ;
int main()
{
    int marks ;
    cout<<"enter your marks : ";
    cin>> marks;
    if(marks>33){
        if(marks>90){
            printf("You topped\n");
        }
        else if(marks>70 &&marks<90){
            cout<< "  passed  "<<endl;
        }
        else{
            cout<<"You can do better"<<endl;
        }
    } 
    else{
        cout << "You fail"<<endl;
    }
    return 0;
}