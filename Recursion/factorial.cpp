
#include <iostream>

using namespace std;
int solve(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return solve(n-1)*n;
}
int main()
{
   
   int n=6;
    cout<<solve(n);

    return 0;
}
