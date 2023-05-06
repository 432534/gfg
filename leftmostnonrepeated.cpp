#include<iostream>
using namespace std;
int leftmostnonrepeated(string a)

{ 
    int k=a.length();
    int count[256]={0};
    for(int i=0;i<a.length();i++)
    {
        count[a[i]]++;
    }
    for(int i=0;i<a.length();i++)
    {
        if(count[a[i]]==1)
        {
            return i;
        }
    }
    return -1;

}
int main()
{
    string a;
    cin>>a;
    cout<<"the index of that character is::"<<leftmostnonrepeated(a);
}