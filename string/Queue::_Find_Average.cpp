#include <bits/stdc++.h>
using namespace std;

void generatePrintBinary(int n)
{
	queue<string> q;
int num=n;
	q.push("1");
int sum=0;
	while (n--) {
		string s1 = q.front();
		q.pop();
	sum+=stoi(s1);
		cout << s1 << " ";

		string s2 = s1; 

		q.push(s1.append("0"));

		q.push(s2.append("1"));
	}
cout<<endl;
int p=sum/num;
cout<<p;
}
int main()
{
	int n;
	cin>>n;

	generatePrintBinary(n);
	return 0;
}
