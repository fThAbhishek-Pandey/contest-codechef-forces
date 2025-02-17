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
          vector<int>vec;
          for(int i=0;i<=n;i++){
          		int ele;
          		cin>>ele;
          		vec.push_back(ele);
          } 
          sort(vec.begin(), vec.begin()+n);
          for(int i=n-1;i>=0;i++){
          	  if(2*vec[n]>=vec[i]){
          	  	swap(vec[n],vec[i]);
          	  	break;
          	  }
          }
          int sum =0;
          for(int i=0;i<n;i++){
          		sum += vec[i];
          }
          cout<<sum<<endl;

    }
	return 0;  
}