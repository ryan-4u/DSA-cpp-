#include<iostream>
using namespace std;
int main()
{
    int no_of_chars;
    cout<<"Enter no of characters: ";
    cin>>no_of_chars;
    for(int j=0;j<no_of_chars;j++)
    {
        char ch = (char)('A'+j);
        cout<<ch<<" ";
    }
    cout<<endl;
}