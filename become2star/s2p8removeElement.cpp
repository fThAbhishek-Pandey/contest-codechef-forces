#include<bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	// Never Give Up,  manzil dur nhi hai
    int t;
    cin>>t;
    while (t--){
            int n,k;
            cin>>n>>k;
            vector<int> vec;
            for (int i=0; i<n;i++){
            	 int ele;
            	 cin>>ele;
            	 vec.push_back(ele);
            }
            if (vec.size()==1) cout<<"yes"<<endl;
            else {
            	sort (vec.begin(), vec.end());
            	int sum = vec[0] +vec.back();
            	if (sum>k) 	cout<<"no"<<endl;
            	else cout<<"yes"<<endl;
            }  
    }
	return 0;  
}