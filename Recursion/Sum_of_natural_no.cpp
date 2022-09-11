
#include <iostream>

using namespace std;
void print(int i,int n,int sum)
{
   if(i==n)
   {
       sum+=i;
       cout<<sum<<endl;
       return;
   }
   sum+=i;
   print(i+1,n,sum);
   
}
int main()
{
   
    print(0,6,0);

    return 0;
}
