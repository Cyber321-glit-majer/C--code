
#include <bits/stdc++.h>

using namespace std;
string solve(string s)
{
    string ans;
    string temp="";
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='.')
        {
            reverse(temp.begin(),temp.end());
            ans+=temp;
            ans.push_back('.');
            temp="";
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    reverse(temp.begin(),temp.end());
    ans+=temp;
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}
