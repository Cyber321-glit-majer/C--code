 
#include <bits/stdc++.h>

using namespace std;
vector<int>solve(int n,int a[],int k)
{
    int temp,temp1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        temp=i;
        
    }
    for(int i=n-1;i>0;i--)
    {
        if(a[i]==k)
        temp1=i;
        
    }
   
    return {temp,temp1};
}
int first(int n,int a[],int k)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
 int ans=-1;
 while(s<=e)
 {
     if(a[mid]==k)
     {
         ans=mid;
         e=mid-1;
     }
     else if(a[mid]<k)
     {
         s=mid+1;
     }
     else
     e=mid-1;
     mid=s+(e-s)/2;
     
 }
 return ans;
    
}
int last(int n,int a[],int k)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
 int ans=-1;
 while(s<=e)
 {
     if(a[mid]==k)
     {
         ans=mid;
         s=mid+1;
     }
     else if(a[mid]<k)
     {
         s=mid+1;
     }
     else
     e=mid-1;
     mid=s+(e-s)/2;
     
 }
 return ans;
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k;
    cin>>k;
    vector<int>v=solve(n,a,k);
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<first(n,a,k)<<endl;
    cout<<last(n,a,k)<<endl;
    return 0;
}
