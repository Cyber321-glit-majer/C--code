
#include <bits/stdc++.h>

using namespace std;

bool solve(int a[],int n,int x)
{
    sort(a,a+n);
    int i=0;
    int j=1;
    while(i<n && j<n)
    {
        int di=a[j]-a[i];
        if(di==x)
        return 1;
        else if(di<x)
        j++;
        else
        i++;
    }
    return 0;
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
    int x;
    cin>>x;
    if(solve(a,n,x))
    cout<<"yes"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
