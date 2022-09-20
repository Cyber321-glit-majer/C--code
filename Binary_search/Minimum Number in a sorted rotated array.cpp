
#include <iostream>

using namespace std;
int solve(int a[],int low ,int high)
{
    
    if(low>high)
    return a[0];
    int mid=low+(high-low)/2;
   
        if(a[mid]>a[mid+1])
        return a[mid+1];
        if(a[mid]<a[mid-1])
        return a[mid];
        if(a[high]>a[mid])
        
            return solve(a,low,mid-1);
            return solve(a,mid+1,high);
        
        
    
    
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
   cout<<solve(a,0,n-1);

    return 0;
}
