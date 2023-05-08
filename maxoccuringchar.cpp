#include<iostream>
using namespace std;
class Solution
{
    public:
    char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        for(int i=0;i<str.length();i++)
        {
            char ch=str[i];
            int number=0;
            number=ch-'a';
            arr[number]++;
        }
        int max=-1;
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(max<arr[i])
            {
                ans=i;
                max=arr[i];
            }
        }
        return 'a'+ans;
    //     int m=str.length();
    //     int arr[m]={0};
    //     vector<int> h;
    //     for(int i=0;i<str.length();i++)
    //     {
    //         int u=atoi(str[i]);
    //           h.push_back(u);
    //     }
    //     return h[1];
    // //   for(int i=0;i<m;i++)
    // //   {
    // //       for(int j=i+1;j<h.size()-1;j++)
    // //       {
    // //           if(h[i]==h[j])
    // //           {
    // //               h[i]++;
    // //           }
    // //       }
    // //   }
    // //   int max=0;
    // //   int t;
    // //   for(int i=0;i<m;i++)
    // //   {
    // //       if(h[i]>max)
    // //       {
    // //           max=h[i];
    // //           t=i;
    // //       }
    // //   }
    // //   return char(str[t]);
    // // }
    }

};
int main()
{
    int t;
    cin>>t;
   while(t--){
    string str;
    cin>>str;
    Solution obj;
    cout<<obj.getMaxOccuringChar(str)<<endl;
   }
}