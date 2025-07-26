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
           int sum =0;
           int mx=0;
           for(int i=0; i< n; i++){
           	  int ele;
           	  cin>>ele;
           	  A.push_back(ele);
           	  mx = max(mx, ele);
           }

           int maxi =0;
           // cout<<mx<<" ";
           for(int i=1; i<=mx; i++){
           		sum=0;
           		for(int j=0; j<n; j++){
           			if( A[j] < i) sum += A[j];
           			else sum += i;
           		}
           		// cout<<sum<<" ";
           		int profit = sum*50 - n*i*30;
           		if(maxi<profit) maxi = profit; 
           }
           cout<<maxi<<endl;
    }
	return 0;  
}