#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
   int a,b,c ;
   cout<<"Enter base: ";
   cin>>a;
   cout<<"Enter power: ";
   cin>>b;
   cout<<"Enter number: ";
   cin>>c;

   int power = pow(a,b);
   int root = sqrt(25);

   cout<<"Base a and Power b: "<<power<<endl;
   cout<<"The square root is: "<<root<<endl;
   
   return 0;
}