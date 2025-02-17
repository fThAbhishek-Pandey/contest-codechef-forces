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
           vector<int> vec;
           for (int i=0; i<n;i++){
           	 int ele;
           	 cin>>ele;
           	 vec.push_back(ele);

           }
           int mx = INT_MIN;
           int mini= 1000007;
           for (int i=1;i<n;i++){
           	    mini = min (mini,vec[i-1]);
           		int diff = vec[i]-mini;
           		mx = max (mx,diff);

           }
           if (mx<=0) cout<<"UNFIT"<<endl;
           else cout<<mx<<endl;
    }
	return 0;  
}