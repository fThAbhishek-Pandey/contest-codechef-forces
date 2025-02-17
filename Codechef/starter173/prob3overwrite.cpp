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
           int n,m;
           cin>>n>>b;
           vector<int> A,B;
           for(int i=0; i<n;i++){
           		int ele;
           		cin>>ele;
           		A.push_back(ele);
           }
           for(int i=0; i<m;i++){
           		int ele;
           		cin>>ele;
           		B.push_back(ele);
           }

       for(int i=0;i<n;i++){
       	  cout<<A[i]<<" ";
       }
       cout<<endl;

    }
	return 0;  
}