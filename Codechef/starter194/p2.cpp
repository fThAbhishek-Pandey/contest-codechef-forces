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
           vector<int> A,B;
           for(int i=0; i< n; i++){
           	   int e;
           	   cin>>e;
           	   A.push_back(e);
           }
           for(int i=0; i<n; i++){
           	  int e;
           	  cin>>e;
           	  B.push_back(e);
           }
           int sum =0;
           for(int i=0; i<n; i++){
           	   if (A[i]> B[i]) sum += A[i]-B[i];
           }
           cout<<sum<<endl;
    }
	return 0;  
}