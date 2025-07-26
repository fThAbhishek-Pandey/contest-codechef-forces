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
           std::vector<int> arr(n);
           unordered_map<int,int> mp;
           for (int i = 0; i < n; ++i)
           {
           	/* code */
           cin>>arr[i];
           	mp[arr[i]]++;   	
           }
           long long r=0;
           long long ansl=-1,ansr=-1;
           long long len=0;
           // two pointer
           for(long long i=0;i<n;i++){
              r=max(r,i);
              while(r<n && mp[arr[r]] ==1) r++;
              if(r-i>len){
                len=r-i;
                ansl=i;
                ansr=r-1;
              }

            }
          
           if(ansl==-1) cout<<0<<endl;
           else cout<<ansl+1<<" "<<ansr+1<<endl;

    }
	return 0;  
}