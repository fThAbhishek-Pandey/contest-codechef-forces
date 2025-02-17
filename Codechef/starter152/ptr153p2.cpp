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
    	   int x,y;
    	    cin>>x>>y;
           string str1, str2;
           cin>>str1>>str2;
           unordered_set<char> st;
           for(int i=0;i<str1.size();i++){
           	st.insert(str1[i]);

           } 
           for(int i=0;i<str2.size();i++){
           		st.insert(str2[i]);
           }
           if(st.size()<26) cout<<"yes"<<endl;
           else cout<<"no"<<endl;
    }
	return 0;  
}