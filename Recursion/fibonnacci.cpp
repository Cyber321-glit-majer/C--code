
#include <iostream>

using namespace std;
void solve(int a,int b,int n)
{
    if(n==0)
    {
        return;
    }
    int c=a+b;
    cout<<c<<endl;
    solve(b,c,n-1);
}

int main()
{
    int a=0,b=1;
    cout<<a<<endl;
    cout<<b<<endl;
    int n=6;
    solve(a,b,n);
}
