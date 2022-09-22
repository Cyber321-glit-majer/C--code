
#include <iostream>

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
    int child=0,adult=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=18)
        child++;
        else
        adult++;
    }
    cout<<"Children Count: "<<child<<endl;
    cout<<"Adult Count: "<<adult<<endl;

    return 0;
}
