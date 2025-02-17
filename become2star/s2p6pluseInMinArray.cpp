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
           int n;
           cin>>n;
           vector<int> vec1;
             vector<int> vec2;
           for (int i=0;i<n;i++){
           	   int ele;
           	   cin>>ele;
           	   if (i%2==0) vec1.push_back(abs(ele));
           	   else  vec2.push_back(abs(ele));
           }
              sort ( vec1.begin(),vec1.end());
              sort ( vec2.begin(),vec2.end());
              if (vec1[0]<vec2.back()) swap(vec1[0],vec2.back());
              long long sum=0;
              for (int i=0;i<vec1.size();i++){
              		sum += vec1[i];
              }
              for (int i=0;i<vec2.size();i++){
              		sum -= vec2[i];
              }
             cout<<sum<<endl;

    }
	return 0;  
}