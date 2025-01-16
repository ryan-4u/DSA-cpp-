/* Given Q queries , check if the given number
   is present in array or not .
   Note: Value of all elements of an array 
        is less 10 to the power 5 .
*/ 
#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    int n ;
    cout<<"Enter No of elements in array: ";
    cin>>n;
    vector<int> v(n) ;
    cout<<"Enter Elements : ";
    for(int i=0; i<n ;i++)
    {
        cin>>v[i];
    }
    
    const int N = 1e5 + 10 ; //scientific notation of 10 to the power 5
    vector<int> freq(N,0) ;

    for(int i=0;i<n ;i++)
    {
        freq[v[i]]++ ;
    }

    int q ; //no of queries ;
    cout<<"Enter no of queries: ";
    cin>>q ;

    while(q--)
    {
        int queryelement;
        cin >> queryelement;
        if (queryelement >= 0 && queryelement < N) 
        {
            cout << freq[queryelement] << endl;
        } else {
            cout << "Query element out of bounds!" << endl;
        }
    }
    return 0;
}
