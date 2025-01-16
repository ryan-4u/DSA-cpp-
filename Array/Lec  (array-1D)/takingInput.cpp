#include<iostream>
using namespace std ;
int main()
{
    char vowels[5];
    int size = sizeof(vowels) / sizeof(vowels[0]);
    // for loop 
    cout<<"input is :";
    for( int i=0 ; i<size ; i++ )
    {
        cin>>vowels[i];
    }
    cout<<"Output is :";
    for( int i=0 ; i<size ; i++ )
    {
        cout<<vowels[i]<<" ";
    }
    cout<<endl;

    // for-each loop 
    char model[5];
    cout<<"input is :";
    for( char& ele:model)
    {
        cin>>ele;
    }
    cout<<"Output is :";
    for( char ele:model)
    {
        cout<<ele<<" ";
    }
    cout<<endl ;
    
    // while loop
    char star[4]; 
    int index = 0 ;
    int size2 = sizeof(star) / sizeof(star[0]);
    cout<<"input is :";
    while( index<size2 ) 
    {
        cin>>star[index];
        index++;
    }
    cout<<"Output is :";
    index = 0 ;
    while( index<size2 ) 
    {
        cout<<star[index]<<" ";
        index++;
    }
    cout<<endl<<endl;
    return 0 ;
}