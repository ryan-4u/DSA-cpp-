#include <iostream>
using namespace std ; 
int main()
{
    //Q-1: In a program,input the side of a square.You have to output the area of the square.
        // int side ;
        // cout<<"Enter side of the square: ";
        // cin>>side ;
        // int area = side*side ;
        // cout<<"Area of the square is: "<<area<<" sq. meter"<<endl ;

/*Q-2: Enter cost of 3 items from the user 
(using float data type)-
 a pencil, a pen and an eraser.
You have to output the total cost of the items
 back to the user as their bill.
(Add on: You can also try adding
 18% GST tax to the items in the bill as an advanced problem  */
        //answer ->
        float pencil = 10.50 ;
        float pen = 39.05 ;
        float eraser = 4.45 ;
        float bill = pencil + pen + eraser ;
        cout<<"The bill is: "<<bill<<endl ;
        float billGst ;
        billGst = bill + (bill*0.18) ;
        cout<<"The bill with GST is :"<<billGst<<endl ;

//Q-3        Build a Simple Interest Calculator.
//        Input: principal(P), rate(R), time(T)
//        Output: (P*R*T)/100
// answer -> already done


//Q-4: Write a program to calculate the area of a circle.
//Input: r(radius)
//Output: PI*r*r(area)
// answer ->
        // int r ;
        // cout<<"Enter radius:";
        // cin>>r;
        // int area = 3.14*r*r ;
        // cout<<"Area of circle is : "<<area<<endl ;
    return 0 ;
}