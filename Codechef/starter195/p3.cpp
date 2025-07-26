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
          cin>>n>>m;
          unordered_set<int> set;
          while(n--){
          	int a;
          	cin>>a;
          	set.insert(a);
          } 
          cout<<m- set.size()<<endl;
    }
	return 0;  
}