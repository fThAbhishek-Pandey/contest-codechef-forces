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
           vector<int> X(n),Y(n);
           for(int i=0;i<n;i++){
           	  cin>>X[i];
           }
           for(int i=0;i<n;i++){
           	  cin>>Y[i];
           }
           vector<int> Z(n);
           for(int i=0;i<n;i++){
           	 Z[i] = abs(Y[i]-Y[0]);
           }
           bool flag =true;
           for (int i=1;i< n;i++){
           	 if(Z[i]< Z[i-1]) {
           	 	flag=false;
           	 	cout<<-1<<endl;
           	 	break;
           	 }
           }
           if(flag){
           	 for (int i = 0; i < n; ++i)
           	 {
           	 	/* code */
           	 	if(X[i]== Y[0]){
           	 		cout<<i<<endl;
           	 		break;
           	 	}
           	 }
           }
    }
	return 0;  
}