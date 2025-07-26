#include<bits/stdc++.h>
using namespace std;
void solve(){
		// Never Give Up,  manzil dur nhi hai
	int n;
	cin>>n;
	if(n%4 !=0) {
		cout<<"NO"<<endl;
	}
	else {
		cout<<"YES"<<endl;
		vector<int> a(n/2), b(n/2);
		// Fill A
            for (int i = 0; i < n / 4; ++i) {
                a[i] = 2 * i + 1;
            }
            for (int i = n / 4; i < n / 2; ++i) {
                a[i] = 2 * (i - n / 4) + n / 2 + 2;
            }

            // Fill B
            for (int i = 0; i < n / 4; ++i) {
                b[i] = 2 * (i + 1);
            }
            for (int i = n / 4; i < n / 2; ++i) {
                b[i] = 2 * (i - n / 4) + n / 2 + 1;
            }
		for(int i=0; i<n/2; i++){
			cout<<a[i]<<((i == n/2 -1)?"": " ");
		}
		cout<<endl;
		for(int i=0;i<n/2;i++){
			cout<<b[i]<<((i == n/2-1)?"":" ");
		}
		cout<<endl;
	}
}
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
         solve() ; 
    }
	return 0;  
}