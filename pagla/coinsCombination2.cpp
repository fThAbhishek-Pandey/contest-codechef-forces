#include<bits/stdc++.h>
using namespace std;
int fbu (vector<int> & coin , int x){
	vector<int> dp(x+7, 0);
	dp[0]=1;
	for(int j=0;j<coin.size();j++){
	    for(int i=1;i<=x;i++){
	    	if(i-coin[j]<0) continue;
	    	dp[i]+= dp[i-coin[j]];
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
     int t;
     cin>>t;
     while (t--){
     	int n,x;
     	cin>>n>>x;
     	vector<int> coin;
     	for(int i=0;i<n;i++){
     		int ele;
     		cin>>ele;
     		coin.push_back(ele);
     	}
     	cout<<fbu(coin)
     }
	return 0;
}