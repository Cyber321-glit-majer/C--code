 
using namespace std;
 
class Solution {
	public:
	

 
		int Count(int L, int R){
		    // Code here
		    vector<bool>prime(R+1,true);

            for(int i=2;i*i<=R;i++){

                if(prime[i]==true){

                    for(int p=i*2;p<=R;p+=i){

                        prime[p]=false;

                    }

                }

            }
		    int cnt=0,cnt1=0;
		    if(L==1) L++;
		    for(int i=L;i<=R;i++)
		    {
		        if(i>1)
		        {
		        if(prime[i])
		        {
		            cnt++;
		        }
		        else
		        {
		            cnt1++;
		        }
		        }
		    }
		    
		    return (cnt1-cnt);
		    
		}

};
 
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int L, R;
		cin >> L >> R;
		Solution obj;
		int ans = obj.Count(L, R);
		cout << ans << "\n";
	}
	return 0;
}
