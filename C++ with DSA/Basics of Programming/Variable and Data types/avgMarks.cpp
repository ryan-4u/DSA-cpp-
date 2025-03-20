#include<iostream>
using namespace std ;

int main() {
    float maths;
    cout<<"enter maths marks: " ;
    cin>> maths ;
    float science;
    cout<<"enter science marks : " ;
    cin>> science ;
    float english;
    cout<<"enter english marks : " ;
    cin>> english ;
    float avg= (maths+science+english)/3 ;
    cout<<"The average marks is "<<avg<<endl ;
    return 0 ;
}