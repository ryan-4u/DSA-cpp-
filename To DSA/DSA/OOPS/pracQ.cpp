#include<iostream>
#include<string>
using namespace std ;

class User{
    int id ;
    string password;
    public:
    string username ;
    User(int id){
        this->id = id ;
    }
    void setPassword(string password){
        this->password = password ;
    }
    string getPassword(){
        return password ;
    }
};

int main(){
    User A(237);
    A.setPassword("yocgpou8g");
    cout<<A.getPassword()<<endl;
    return 0 ;
}