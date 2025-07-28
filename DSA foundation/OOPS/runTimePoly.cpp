#include<iostream>
#include<string>
using namespace std ;

class Parent{
    public:
        void show(){
            cout<<"i am parent...\n" ;
        }
        virtual void hello(){
            cout<<"I am your parent\n";
        }
};
class Child: public Parent{
    public:
        void show(){
            cout<<"i am child...\n" ;
        }
        void hello(){
            cout<<"I am your child\n";
        }
};

int main(){
    Child c1 ;
    c1.show() ;
    return 0 ;
}