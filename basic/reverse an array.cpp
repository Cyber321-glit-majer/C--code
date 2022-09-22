#include<iostream>
using namespace std;

int main(){
 
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }

  int temp;

  int i=0;         
  int j=n-1;  
  while(i<j){
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;  
    j--;  
  }

  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
  }

  return 0;
}
