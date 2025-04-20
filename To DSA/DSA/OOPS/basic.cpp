#include<iostream>
using namespace std ;

// creating a class
class Student {
    public:
    // properties
    string name ;
    float cgpa ;
    // methods
    void getPercentage(){
        cout<< (cgpa*10)<<"% \n";
    }
};

class User {
    int id ;
    string username ;
    string password ;
    string bio ;

    void deactivate(){
        cout<<"Deactivatimg account\n";
    }
    void editBio( string newBio ){
        string bio = newBio ;
    }

};

int main(){
    Student s1 ;
    cout<<sizeof(s1)<<endl ;
    s1.cgpa = 8.9 ;
    s1.getPercentage();

    return 0 ;
}