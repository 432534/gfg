#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int A[n];
    for(int i=0;i<n-1;i++)
    {
        cout<<"enter the elements:";
        cin>>A[i];
    }
    cout<<"enter the value of the element::"<<endl;
    int x;
    cin>>x;
    cout<<"enter the position of the element"<<endl;
    int pos;
    cin>>pos;
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
    {
        A[i]=A[i+1];
    }
    A[pos]=x;
    cout<<"the array after the insertion"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }    
}