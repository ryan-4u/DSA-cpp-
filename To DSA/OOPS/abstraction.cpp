#include<iostream>
#include<string>
using namespace std ;

// abstract class 
class Shape{
    public:
        virtual void draw() = 0 ; // abstract fnuc or pure virtual func
};
class Circle{
    public:
        void draw(){
            cout<<"Draw circle...\n";
        }
};
class Square{
    public:
        void draw(){
            cout<<"Draw square...\n";
        }
};
int main(){
    Circle cir1 ;
    cir1.draw();
    Square sq1 ;
    sq1.draw() ;
    // Shape s1 ; // not possible
    // s1.draw();

    return 0 ;
}