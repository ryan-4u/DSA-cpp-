#include<iostream>
using namespace std ;
//function
bool isPalindrome(int num){
    int origNum = num ;
    int newNum = 0 ;
    while(num>0){
        int lastDigit = num % 10 ;
        newNum = newNum*10 + lastDigit ;
        num /= 10 ;
    }
    return origNum==newNum ;  
}
//main
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    bool res = isPalindrome(number);
    if(res == 1) printf("%d is palindrome\n",number);
    else printf("%d is not a palindrome\n",number);
    return 0 ;
}