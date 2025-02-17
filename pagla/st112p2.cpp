	#include<bits/stdc++.h>
	using namespace std;
	
	int main () {
	    #ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);// FOR GETTING input form input,text
		freopen("output.txt","w",stdout);// for writing output to output.txt
		#endif 
		// Never Give Up,  manzil dur nhi hai
	     int t;
	     cin>>t;
	     while (t--){
	     	int n,k;
	     	cin>>n>>k;
	     	cout<<n-(n/(k+1))*k<<endl;
	     }
		return 0;
	}