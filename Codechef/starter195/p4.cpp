// https://www.codechef.com/problems/GAMEEZ
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
         int n;
         cin>>n;
         vector<int> vec;
         for(int i=0; i<n;i++){
         	 int e;
         	 cin>>e;
         	 vec.push_back(e);

         }  
         int sum =0, x=0;
         int k= 2*n;
         sort(vec.begin(), vec.end(), greater<int>());
         for(int i=1; i<= k; i++){

         }
    }
	return 0;  
}