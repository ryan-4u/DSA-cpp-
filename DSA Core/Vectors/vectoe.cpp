#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> vec1;
    cout<<"Sixe of vec1: "<<vec1.size()<<endl ;
    
    vector<int> vec2 = {1,2,3,4,5} ;
    cout<<"Sixe of vec2: "<<vec2.size()<<endl ;
    cout<<"Vec2 elements: ";
    for(int i=0 ; i<vec2.size() ; i++){
        cout<<vec2[i]<<" ";
    }
    cout<<endl ;
    
    vector<int> vec3  (8,-2) ;
    cout<<"Sixe of vec3: "<<vec3.size()<<endl ;
    cout<<"Vec3 elements: ";
    for(int i=0 ; i<vec3.size() ; i++){
        cout<<vec3[i]<<" ";
    }
    cout<<endl ;

    return 0 ;
}