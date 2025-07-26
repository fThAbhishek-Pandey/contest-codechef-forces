//https://www.codechef.com/problems/SULIM
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
           int N;
           cin>>N;
           vector<int> A(N),B(N);
          for (int i = 0; i < N; ++i)
          {
          	/* code */
          	cin>>A[i];
          }
          for (int i = 0; i < N; ++i)
          {
          	/* code */
          	cin>>B[i];
          }
          // cout<<A.size()<<B.size()<<endl;
          int L=0;
          for(int i=0; i<N; i++){
          	if(L < B[i]) L= B[i];
          }
          int ans =0;
          for(int i=1; i<=L; i++){
          	int s=0;
          	 for(int j=0; j<N;j++){
          	 	if(B[j]<=i && A[j]>0){
          	 		s+= A[j];
          	 	}
          	 }
          	 if(s-i > ans) ans = s-i;
          }
          cout<<ans<<endl;
    }
	return 0;  
}