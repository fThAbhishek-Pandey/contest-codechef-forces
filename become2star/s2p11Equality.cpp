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
           vector< long long> vec;
           long long sum=0;
           for (int i=0; i<n;i++){
           	  long long ele;
           	  cin>>ele;
           	  vec.push_back(ele);
              sum += ele;   
           }
              sum /= (n-1);
              for (int i=0;i<n;i++){
                cout<<sum - vec[i]<<" ";
              }
              cout<<endl;
           
    }
	return 0;  
}