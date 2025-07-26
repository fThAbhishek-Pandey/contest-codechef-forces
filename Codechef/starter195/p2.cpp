//https://www.codechef.com/problems/FAIL
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
           int n;
           cin>>n;
           int sum =0, k=1;
           bool flag = true;
           vector<int> vec(n);
           for(int i=0; i<n; i++){
           	   cin>>vec[i];
           }
           while(n--){
           	  
           	  sum += vec[k-1];
           	  // cout<<sum<<" ";
           	  if( (sum*1.0)/k < 40 ) {
           	  	 flag = false;
           	  	 break;
           	  } 
           	  k++;
           }
           if(flag) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
    }
	return 0;  
}