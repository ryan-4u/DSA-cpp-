#include<iostream>
using namespace std ;

int sum(int a, int b){
    int sum = a+b;
    return sum ;
}

double sum(double a, double b){
    double sum = a+b;
    return sum ;
}

int sum(int a, int b, int c){
    int sum = a+b+c;
    return sum ;
}

int main(){
    int f1 = sum(34,56);
    cout<<"function 1 result: "<<f1<<endl;
    double f2 = sum(35.7,23.5);
    cout<<"function 2 result: "<<f2<<endl;
    int f3 = sum(7,8,9);
    cout<<"function 3 result: "<<f3<<endl;
}
