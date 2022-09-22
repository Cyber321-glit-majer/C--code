
#include <iostream>

using namespace std;

int main()
{
   int a,b;
   cin>>a>>b;
   if(a==1)
   cout<<b*1000;
   else if(a==2)
   {
       cout<<b*100000<<endl;
   }
   else if(a==3)
   {
       cout<<b*1000000<<endl;
   }

    return 0;
}
