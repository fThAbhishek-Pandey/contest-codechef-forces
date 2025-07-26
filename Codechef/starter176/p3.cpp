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
           int n,c;
           string str;
           cin>>n>>c>>str;
           vector<int> freq(5,0);
           for(int i=0;i<str.size();i++){
           	  freq[str[i]-'A']++;
           }
           int count=0;
           for(int i=0;i<5;i++){
           	if(freq[i] !=0) count++;

           }
           int cost1 = count*c;

           
           	int k= n -c;
           	// cout<<k<<" "<<count<<" "<<c<<endl;
            int cost2 = c*(c+1)/2 + k*c ;
            if (count> c) cout<<min(cost1,cost2)<<endl;
            else {
            	int h= n*(n+1)/2;
            	cout<<min(cost1, h)<<endl;
            }
           
           
    }
	return 0;  
}