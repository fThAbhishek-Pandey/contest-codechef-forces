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
            int x,y,z;
            cin>>x>>y>>z;
            int cnt =0;
            if (x>1)cnt++;
            if (y>1) cnt++;
            if (z>1) cnt++;
            int ans =0;
             if (x>0) ans++;
            if (y>0) ans++;
            if (z>0) ans++;
             ans += cnt *(cnt-1)/2;
            int mini = min ({x,y,z});
            int mx= max({x,y,z});
            if (mini==2 &&mx == 2) cout<<4<<endl;
            else if ( mini==2) cout<<5<<endl;
            else cout<<ans<<endl;
    }
	return 0;  
}