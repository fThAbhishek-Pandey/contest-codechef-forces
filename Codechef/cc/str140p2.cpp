#include<bits/stdc++.h>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// Never Give Up,  manzil dur nhi hai
    int t;
    cin>>t;
    while (t--){
            int n,x,y;
            cin>>n>>x>>y;
            int maxi =0;
            for (int i=0;i<=n;i++){
            	int sum = x*i + y*((n-i)/2);
            	
            	maxi = max (maxi, sum);
            }
            cout<<maxi<<endl;
    }
	return 0;  
}