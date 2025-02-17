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
           vector<int> arr;
           for(int i=0; i< n;i++){
           	  int ele;
           	  cin>>ele;
           	  arr.push_back(ele);
           }
           unordered_map<int,int> mp;
           for(int i=0;i<n;i++){
           	mp[arr[i]]++;
           }
           bool flag= true;
           for(auto ele: mp){
           			if(ele.second >1) {
           				cout<<1<<endl<<ele.first<<endl;
           				flag=false;
           				break;
           			}
           }
           if(flag) cout<<-1<<endl;
    }
	return 0;  
}