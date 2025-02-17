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
           int n,h,y1,y2, l;
           cin>>n>>h>> y1>>y2>>l;
           vector<vector<int>> vec;
           for (int i=0; i<n;i++){
           	int type,x;
           	cin>>type>>x;
           	vec.push_back({type,x});
           }
           int count =0;
           for (int i=0;i<n;i++){
           	    if (vec[i][0]==2 ) { 
                    if (vec[i][1]<=y2) count++;
                    else if (l>1){
                    	count++;
                    	l--;
                    }
                    else break;
           	    }
           	    else if (vec[i][0]==1){
           	    	int k= h-y1;
           	    	if (k<= vec[i][1]) count++;
           	    	else if (l>1) {
           	    		count++;
           	    		l--;
           	    	}
           	    	else break;
           	    }
           	  
           }
           cout<<count<<endl;
    }
	return 0;  
}