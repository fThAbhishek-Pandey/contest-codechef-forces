#include<bits/stdc++.h>
using namespace std;
int findSmallestGreaterOrEqual( vector<int> &vec, int x){
	auto it = lower_bound(vec.begin(), vec.end(), x);
	return (it != vec.end()) ? *it : -1;
}
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
       int n,m;
       cin>>n>>m;
       vector<int> a(n),b(m);
         for(int i=0; i<n;i++){
         	cin>>a[i];
         }
         for(int i=0;i<m;i++){
         	cin>>b[i];
         }
         sort(b.begin(), b.end());
         int prev= INT_MIN;

         bool flag=true;
         for(int i=0;i<n;i++){

         	 int val = findSmallestGreaterOrEqual(b, a[i]+ prev);
         	if (val !=-1){
         		if (prev > a[i]){
         	  	   a[i]= val-a[i];
         	  }
         	  else 	a[i] =min(a[i], val-a[i]);
         	
         	} 
         	if (a[i]< prev) {
         		flag= false;
         	} 
         	prev= a[i];
         }
         if (flag) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
	return 0;  
}