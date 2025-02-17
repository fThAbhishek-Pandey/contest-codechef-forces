#include<bits/stdc++.h>
using namespace std;
int sumDigi(int x){
		int sum =0;
		while(x >0){
            sum += x%10;
            x %=10;
		}
		return sum;
}
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
           if(y> (x+1)) cout<<"NO"<<endl;
           else  if((1+ x%9 ) %9== y%9) cout<<"yes"<<endl;
           else cout<<"NO"<<endl;
         
    }
	return 0;  
}