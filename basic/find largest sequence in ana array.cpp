
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
     int ms=0;                   
        int me=0;                    
        int cs=0,ce=0;              
        int max=0,c=0;           
        for(int i=0;i<n;i++){

           if(a[i]-a[i+1]==-1){

             if(c==0)              
             {
               cs=i;ce=i+1;c=2;    
              }
             else              
              {
               ce=i+1;c++;      
              } 

              if(c>max)         
               {
                   max=c;
                   ms=cs;
                   me=ce;
               }
             }
             else             
             {
             cs=0;
             ce=0;
             c=0;
              }
      }
        for(int i=ms;i<=me;i++)           
         cout<<a[i]<<" ";

    return 0;
}
