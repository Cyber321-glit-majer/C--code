
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
  vector<int>v;
for(int i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
        v.push_back(a[i]);
    }
}
int mi=*min_element(v.begin(),v.end());
cout<<mi;
    return 0;
}
