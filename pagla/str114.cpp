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
     	int x,y,z;
     	cin>>x>>y>>z;
     	z/=2;
     	int k= x*y;
     	if(z>=k ) cout<<k<<endl;
     	else cout<<z<<endl;
     }
	return 0;
}