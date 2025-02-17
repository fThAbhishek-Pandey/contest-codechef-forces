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
             int n,x;
             cin>>n>>x;

    
        for (int i =1;i<=n/2;i++){
        	cout<<x-i<<" ";
        }
        if (n%2==1) cout<<x<<" ";
        for (int i=1;i<=n/2;i++){
        	cout<<n+i<<" ";
        }
        cout<<endl;
    }
	return 0;  
}