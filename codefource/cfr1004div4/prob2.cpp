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
           string str;
           cin>>str;
           int count=0;
           for(int i=0;i<str.size();){
           	    if(str[i]== str[i+1]) {
           	    	count=1;
           	    	break;
           	    }
           	    else {
           	    	i++;
           	        count++;
           	    }
           }
           cout<<count<<endl;
    }
	return 0;  
}