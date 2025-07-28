#include<iostream>
#include<string>
using namespace std ;

// creating a class
class Student {
    
    // properties
    string name ;
    float cgpa ;
    // methods
    public:
    void getPercentage(){
        cout<< (cgpa*10)<<"% \n";
    }

    // setters 
    void setName( string nameVal){
        name = nameVal ;
    }
    void setCgpa( float cgpaVal ){
        cgpa = cgpaVal ;
    }
    //getters
    string getName(){
        return name ;
    }
    float getCgpa() {
        return cgpa ;
    }
};

int main(){
    Student s1 ;
    s1.setName("Aaryan") ;
    cout<<s1.getName()<<endl ; 

    s1.setCgpa(8.9) ;
    cout<<s1.getCgpa()<<endl ; 

    return 0 ;
}