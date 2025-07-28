#include<iostream>
#include<string>
using namespace std ;

// creating a class
class Car {
    public:
    string name ;
    string color ;
    
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
    // manual or custom copy constructor
    Car( Car &original){
        cout<<"copying...\n";
        name = original.name ;
        color = original.color ;
    }
};

int main(){
    Car c0 ;
    Car c1( "maruti suzuki","golden") ;
    Car c2(c1) ;
    cout<<c2.name<<endl ;
    cout<<c2.color<<endl ;
    // cout<<"Color is "<<c1.getColor() <<endl ; 
    // cout<<"Name is "<< c1.getName() <<endl ;
    return 0 ;
}