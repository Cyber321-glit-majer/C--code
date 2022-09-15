
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};
 
class Solution
{
    public:
  
    static bool cmp(pair<double,Item>a,pair<double,Item>b)
{
    return a.first>b.first;
}
double fractionalKnapsack(int w,Item a[],int n)
{
   vector<pair<double,Item>>v;
   for(int i=0;i<n;i++)
   {
       double pu=(1.0*a[i].value)/a[i].weight;
       pair<double,Item>p=make_pair(pu,a[i]);
       v.push_back(p);
   }
   sort(v.begin(),v.end(),cmp);
   double totalval=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].second.weight>w)
        {
           totalval+=v[i].first*w;
           w=0;
        }
        else
        {
            totalval+=v[i].second.value;
            w=w-v[i].second.weight;
        }
    }
   return totalval;
}
        
};


 
int main()
{
 
	     
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
	 
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
	 
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	
    return 0;
}
 



