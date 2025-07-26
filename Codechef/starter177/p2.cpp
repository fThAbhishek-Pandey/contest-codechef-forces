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
           int x,y,k;
           cin>>x>>y>>k;
           int isOdd= ((x&1)^(y&1));
           int r= (k&1);
           // cout<<isOdd<<" "<<r<<endl;
           if (isOdd == r){
                    int h= abs(k- abs(x-y));
                    cout<< h/2<<endl;
           }
           else  {

            cout<<-1<<endl;
           }
    }
	return 0;  
}