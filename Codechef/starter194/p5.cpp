// 
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
           vector<int> A;
           for(int i=0; i<n; i++){
           	    int e;
           	    cin>>e;
           	    A.push_back(e);
           }
           int ans =0;
           sort(A.begin(), A.end(), greater<int>());

           for(int i=1; i< n; i++){
           	    for(int j=i+1; j<n; j++){
           	    	ans = max(ans, A[0]%(A[i]+A[j]));
           	    }
           }
       
        cout<<max(A[1], ans)<<endl;
    }
	return 0;  
}