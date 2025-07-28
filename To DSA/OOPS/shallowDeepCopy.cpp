#include<iostream>
#include<string>
using namespace std ;

// creating a class
class Car {
    public:
    string name ;
    string color ;
    int *mileage ;
    
    Car( string name, string color ){
        cout<<"# Parameterized Constructor. Object is creating...\n" ;
        this->name = name ;
        this->color = color ;
        mileage = new int ;
        *mileage = 12 ;
    }
    // shallow 
        // Car( Car &original){
        //     cout<<"copying...\n";
        //     name = original.name ;
        //     color = original.color ;
        //     mileage = original.mileage ;
        // }
    //deep
        Car( Car &original){
            cout<<"copying...\n";
            name = original.name ;
            color = original.color ;
            mileage = new int ;
            *mileage = *original.mileage ;
        }

    // destructor 
        ~Car(){
            // static memory deleted automatically...
            cout<<"Deleting object...\n" ;
            if( mileage != NULL){
                delete mileage ;
                mileage = NULL ;
            }
        }    
};

int main(){
    Car c1( "maruti suzuki","golden") ;
    Car c2(c1) ;
    cout<<c2.name<<endl ;
    cout<<c2.color<<endl ;
    cout<<*c2.mileage<<endl ;
    *c2.mileage = 10 ;
    cout<<*c2.mileage<<endl ;
    cout<<*c1.mileage<<endl ;
    return 0 ;
}