#include<iostream>
#include<string>
using namespace std ;

// creating a class
class Car {
    string name ;
    string color ;

    public:
    Car(){
        cout<<"# Non-Parameterized Constructor. Object is creating...\n" ;
    }
    Car( string name, string color ){
        cout<<"# Parameterized Constructor. Object is creating...\n" ;
        this->name = name ;
        this->color = color ;
    }
    
    void start(){
        cout<<"Car is starting...\n";
    }
    void stop() {
        cout<<"Car has stopped...\n";
    }

    //getters
    string getName(){
        return name ;
    }
    string getColor(){
        return color ;
    }
};

int main(){
    Car c0 ;
    Car c1( "maruti suzuki","golden") ;
    cout<<"Color is "<<c1.getColor() <<endl ; 
    cout<<"Name is "<< c1.getName() <<endl ;
    return 0 ;
}