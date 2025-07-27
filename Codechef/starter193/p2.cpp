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
           int counte=0, counto=0;
           for(int i =1; i<= n; i++){
           		if(n%i==0){
           			 // cout<<i<<" ";
           			 if (i&1) counto++;
           			 else if(n%i == 0) counte++;
           		}
           }
           cout<<counto<<" "<<counte<<endl;
    }
	return 0;  
}