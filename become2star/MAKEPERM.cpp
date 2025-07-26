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
           for(int i=0;i<n;i++){
           	   int ele;
           	   cin>>ele;
           	   arr.push_back(ele);
           }
           sort(arr.begin(), arr.end());
           bool flag = true;
           for(int i=1;i<n; i++){
           	   if(i+1 != arr[i] && arr[i-1] !=arr[i] ){
           	   	  flag = false;
           	   	  break;
           	   }
           }
           if(arr.back() > n) flag=false;
           if(flag ){
           	 cout<<"yes"<<endl;
           }
           else cout<<"no"<<endl;
    }
	return 0;  
}