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
           int a,b;
           cin>>a>>b;
           if(a==0) cout<<"No"<<endl;
           else{
           	 if(b%a==0) cout<<"YES"<<endl;
           	 else cout<<"No"<<endl;
           }
    }
	return 0;  
}