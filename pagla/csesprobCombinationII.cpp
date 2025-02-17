#include<bits/stdc++.h>
using namespace std;

 int const M = 1e9+7;
int fbu (vector<int>& coins, int x, int n){
	     vector<int> dp(1000006,0);
         dp[0]=1;
        for (int j= 0; j < n; ++j)
        {
        	//go to each coin 
        	for (int i=1;i<=x;i++){
                if(i- coins[j]<0) continue;
                dp[i]= (dp[i]%M + dp[i-coins[j]]%M)%M;
        	}
        }
        return dp[x];
}
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up,  manzil dur nhi hai
	
     	   int n, x;
     	    cin>>n>>x;
     	    vector<int>coins;
     	    for(int i=0;i<n;i++){
     	    	  int ele;
     	    	  cin>>ele;
     	    	  coins.push_back(ele);
     	    }
     	    int ans = fbu(coins,x,n);
     	  cout<<ans<<endl;
	return 0;
}