#include<iostream>
#include<string>
using namespace std ;

class Animal{
    public:
        string color ;
        void breathe(){
            cout<<"Can breathe...\n" ;
        }
        void eat(){
            cout<<"can eat...\n" ;
        }
};
class Fish: public Animal{
    public:
        int fins ;
        void swim(){
            cout<<"Can swim...\n" ;
        }
};

int main(){
    Fish f1 ;
    // fish prop and method
    f1.fins = 3 ;
    cout<<f1.fins<<endl;
    f1.swim();
    //inherited
    f1.color = " golden";
    cout<<f1.color<<endl;
    f1.breathe();
    f1.eat();

    return 0 ;
}