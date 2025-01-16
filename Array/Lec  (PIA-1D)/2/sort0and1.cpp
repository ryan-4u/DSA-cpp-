//sort an array consisting of 0 and 1's
#include<iostream>
#include<vector>
using namespace std ;

void sortZeroesandOnes(vector<int> &v)
{
    int countZero = 0 ;
    for( int ele:v)
    {
        if(ele == 0){
             countZero++;
        }  
    }

    for(int i=0;i<v.size();i++)
    {
        if(i<countZero) {
            v[i] = 0;
        } else {
            v[i] = 1 ;
        }
    }
    return ;
}

int main()
{
    int n ;
    cout<<"Enter No of elements in array: ";
    cin>>n;
    vector<int> v ;
    cout<<"Enter Elements : ";
    for(int i=0; i<n ;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortZeroesandOnes(v);

     for(int i=0;i<n;i++)
     {
         cout<<v[i]<<" ";
     }
     cout<<endl;
     return 0 ;
}