#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long int numberOfSquares(long long int b)
    {
        // First approACH
        /*long long int sq=0;
        while(base>=2)
        {
           sq+=(base-2)/2; 
           base=base-2;
        }
        return sq;*/
        // SECOND 
       /* b = (b - 2);
   // Since each square has base of
   // length of 2
   b = floor(b / 2);
   return b * (b + 1)/2;*/
   // THIRD
   long long int an=0;
   an=(b-2)/2;
   return an*(an+1)/2;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		long long int base;
		cin >> base;

        Solution ob;
		cout << ob.numberOfSquares(base) << "\n";

	}

	return 0;
}

// } Driver Code Ends
