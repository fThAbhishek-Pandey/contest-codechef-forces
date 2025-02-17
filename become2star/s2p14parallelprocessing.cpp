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
           vector<long long > vec;
           for (int i=0;i<n;i++){
           	long long  ele;
           	cin>>ele;
           	vec.push_back(ele);
           }
           long long  mx = INT_MAX;
           
           long long  last = INT_MAX;
            for (int i=1;i<n;i++){
                  vec[i] += vec[i-1];
                  
            }
            long long  sum=vec.back();
             for (int i=0;i<n;i++){
                long long sum1= vec[i];
                long long  sum2 = sum- vec[i];
             	long long diff = abs(sum1-sum2);
                if(last>diff)  {
                      mx = max (sum1, sum2);
                      last = diff;
                }
            }         
           cout<<mx<<endl;
    }
	return 0;  
}