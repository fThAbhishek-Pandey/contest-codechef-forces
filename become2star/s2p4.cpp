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
           int day,d,p,q;
           cin>>day>>d>>p>>q;
           long long count =0;
           int k= day/d;
            count += k * d * p + (k * (k - 1) / 2) * d * q;
            count += (day%d)*(p + k*q);
           cout<<count<<endl;
    //cout<<"hello"<<endl;
    }
	return 0;  
}