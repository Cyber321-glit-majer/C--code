#include<bits/stdc++.h>
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
     priority_queue<long long,vector<long long>,greater<long long>>pq ;
     for(int i=0;i<n;i++){
         pq.push(a[i]);
     }
     long long cost=0;
     while(pq.size()>1)
     {
        long long fi=pq.top();
        pq.pop();
        long long se=pq.top();
        pq.pop();
        long long me=fi+se;
        cost+=me;
        pq.push(me);
     }
     cout<<cost;
     
     return 0;
 }
