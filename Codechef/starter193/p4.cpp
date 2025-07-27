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
           int n,k;
           cin>>n>>k;
           int same = n-k+1;
           for(int i= same;i>=1; i-- ){
           	  cout<<i<<" ";
           }
           for(int i= same+1; i<= n; i++){
           	    cout<<i<<" ";
           }
       cout<<endl;
    }
	return 0;  
}