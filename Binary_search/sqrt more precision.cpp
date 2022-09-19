
#include <bits/stdc++.h>
using namespace std;
class sol
{
    public:
    int binarys(int n)
    {
        int s=0;
        int e=n;
         long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e)
        {
            
            long long int sq=mid*mid;
            if(sq==n)
                return mid;
            else if(sq<n)
            {  ans=mid;
                s=mid+1;
            }
            else
            {
              
               e=mid-1; 
            }
           mid=s+(e-s)/2;
        }
        return ans;
    }
   
    double precision(int n,int pre,int temp)
    {
        double factor=1;
        double ans=temp;
        for(int i=0;i<pre;i++)
        {
            factor=factor/10;
        
        for(double j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
        }
        return ans;
    }
};
int main()
{
   
    sol sb;
   int n;
   cin>>n;
   int temp=sb.binarys(n);
   cout<<sb.precision(n,3,temp)<<endl;

    return 0;
}
