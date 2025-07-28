#include<iostream>
using namespace std ;

void counter(){
    //int count = 0 ; // normal variable is created everytime func is called and deleted as func ends
    static int count = 0 ; // created once and remain in memory until program ends
    count++ ;
    cout<<count<<endl ;

    return ;
}

class Example{
    public:
    static int x ;

    Example(){
        cout<<"Constructor..\n";
    }
    ~Example(){
        cout<<"Destructor..\n";
    }
};
int Example:: x = 0 ;

int main(){
    // func
        // counter();
        // counter();
        // counter();
        // counter();
    // class
        // Example e1 ;
        // Example e2 ;
        // Example e3 ;
        // cout<< e1.x++ <<"\n";
        // cout<< e2.x++ <<"\n";
        // cout<< e3.x++ <<"\n";
    // static objects
        int a = 0 ;
        if( a== 0 ){
            static Example e1 ;
        }
        cout<<"Code ending...\n";        
    return 0 ;
}