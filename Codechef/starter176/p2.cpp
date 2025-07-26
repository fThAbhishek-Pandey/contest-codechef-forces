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
          int x,y,z,a,b,c ;
          cin>>x>>y>>z>>a>>b>>c;
          int count =0;
          if(c>=z) count+= z;
          else {
          	count += c;
          	y += z-c;
          } 
          if(b>= y) count += y;
          else {
          	count += b;
          	x += y-b;
          }
          count += min (x,a);
          cout<<count<<endl;
    }
	return 0;  
}