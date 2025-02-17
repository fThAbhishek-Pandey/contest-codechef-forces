#include<bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	// Never Give Up,  manzil dur nhi hai
    int t;
    cin>>t;
    while (t--){
           int n;
           cin>>n;
           string s;
           cin>>s;
           int count0 =0,count1=0; 
           for (int i =0; i<n;i++){
           	if (s[i]=='0')count0++;
           	else count1++;
           }
           int k= min(count0,count1);
           if (k%2==0) cout<<"Ramos"<<endl;
           else cout<<"Zlatan"<<endl;
      
    }
	return 0;  
}