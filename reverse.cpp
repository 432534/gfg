#include<iostream>
using namespace std;
int reverse(string a)
{
  int m=a.size();
  for(int i=m;i>=0;i--)
  {
    cout<<a[i]<<" ";
  }
}
void reversewords(string a,int low,int high)
{
    int t=a.length();
    for(int i=0;i<t;i++)
    {
        if(a[i]==' ')
        {
            reversewords(a,low,i-1);
            low=i+1;
        }
    }
}

int main()
{
    string a;
    cin>>a;
    int m=a.size();
    reverse(a);
    reversewords(a,0,m);

}