#include<iostream>
using namespace std ;

void print( int n ){
    if( n== 0 ){ // base case
        return ;
    }
    cout<<n<<" "; //kaam 
    print( n-1 ) ; // inner fxn 
}
int main(){
    print( 20 ) ;
    cout<<endl;
    return 0 ;
}