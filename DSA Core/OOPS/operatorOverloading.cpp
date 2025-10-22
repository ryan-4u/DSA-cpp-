#include<iostream>
#include<string>
using namespace std ;

class Complex{
    int real ;
    int imag ;
public:
    Complex(int r,int i){
        real = r ;
        imag = i ;
    }    

    void showNum(){
        cout<< real << " + " << imag << "i\n";
    }
    
    // using operator overloading
    Complex operator + (Complex &c2) {
        int resReal = this->real + c2.real ;
        int resImag = this->imag + c2.imag ;
        Complex c3( resReal, resImag ) ;

        return c3 ;
    }
};

int main(){

    Complex c1(1,2) ;
    Complex c2(3,5) ;

    c1.showNum() ;
    c2.showNum() ;

    Complex c3 = c1 + c2 ;
    c3.showNum() ;

    return 0 ;
}