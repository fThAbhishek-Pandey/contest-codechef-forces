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
     	int n;
     	cin>>n;
     	string s;
     	cin>>s;
     	string ans= "";
     	for (int i=0;i<n-1; i++){
     		   if (s[i]==s[i+1] ) ans += s[i];
     		   else if (s[i]<s[i+1] ) {
     		   	ans += s[i];
     		   	if (i+2<n) ans += s.substr(i+2, n-i-2);
     		   	break;
     		   }
     		   else {
     		   	ans += s.substr(i+1, n-i-1);
     		   	break;
     		   }
     	}
     	cout<<ans<<endl;
     }
	return 0;
}