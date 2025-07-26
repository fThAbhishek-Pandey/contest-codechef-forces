// https://www.codechef.com/problems/MARKALL?tab=statement 
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
          vector<int>A;
          for(int i=0; i<n; i++){
          	int e;
          	cin>>e;
          	A.push_back(e);
          }
          int ans = min( A[0], A[n-1]);
          sort(A.begin(), A.end());
          ans = min(ans, A[1]+A[1]);
          cout<<ans<<endl;
    }
	return 0;  
}