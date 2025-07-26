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
           int n,y;
           cin>>n>>y;
           int k=0;
           for(int i=0;i<n;i++){
           	 int ele;
           	 cin>> ele;
           	 k |= ele;
           }
           bool flag = true;
           for(int i=0; i<31; i++){
           	  int r = ((k>>i)&1)^ ((y>>i)&1);
           	  if(r && ((y>>i)&1) ==0) {
           	  	cout<<-1<<endl;
           	  	flag=false;
           	  	break;
           	  }
           }
        if (flag)   cout<<(k^y)<<endl;

    }
	return 0;  
}