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
           std::vector<int> arr;
           unordered_map<int,int> mp;
           for (int i = 0; i < n; ++i)
           {
           	/* code */
           	int ele;
           	cin>>ele;
           	arr.push_back(ele);
           	mp[ele]++;   	
           }
           int maxfreq=0;
           int num=-1;
           for(auto ele: mp){
           	 if(ele.second > maxfreq) {
           	 	  maxfreq = ele.second;
           	 	  num= ele.first;
           	 }
           }
           int l=-1,r=-1;
           bool flag=true;
           for(int i=0;i<n;i++){
           	   if(i+1<n &&l==-1 && arr[i]==num && arr[i+1] !=num&& flag){
           	   	l=arr[i];
           	   	flag=false;
           	   }
           	  else if (i+1<n&&arr[i]!=num &&arr[i+1]==num &&!flag){
           	   	r= arr[i];

           	   }
           }
           if (n==1) cout<<arr[0]<<" "<<arr[0]<<endl;
          else if (l==-1 && r== -1) {
           	 cout<<0<<endl;
           }
          else if (r==-1) {
          		cout<<l<<" "<<arr.back()<<endl;
          }
          else cout<<l<<" "<<r<<endl;

    }
	return 0;  
}