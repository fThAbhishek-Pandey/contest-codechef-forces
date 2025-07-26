//https://www.codechef.com/problems/AVGAPP
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
           int N,K;
           cin>>N>>K;
           vector<int>vec(N);
           int SUM =0;
           for(int i=0; i<N; i++){
            	cin>>vec[i];
           	  SUM += vec[i];
           }
           sort (vec.begin(), vec.end());
           int r= ceil((vec[0]+vec[1])*1.0/2);
           // cout<<r<<endl;
           while(K){
           	  int t = (vec[0]+vec[1]+1)/2;
           	  if(t < vec[1])
           	  	SUM += t;
           	  else {
           	  SUM +=	t*K;
           	  	break;
           	}
           	K--;
           }
           // SUM += K*r;
           cout<<SUM<<endl;

    }
	return 0;  
}
