#include<iostream>
#include<string>
using namespace std ;
class Print{
    public:
        void show(int n){
            cout<<"Num is "<<n<<endl ;
            return ;
        }
        int show(string str){
            cout<<"String is "<<str<<endl ;
            return 0 ;
        }
};

int main(){
    Print p1 ;
    p1.show(25);
    p1.show("aman") ;

    return 0 ;
}