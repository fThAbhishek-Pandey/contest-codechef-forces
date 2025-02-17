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
          string str;
          int n;
          cin>>n;
          cin>>str;
          char last='0';
          int count=0;

          for(int i=0;i<str.size();i++){
          		bool flag = last^str[i];		
          	  if(flag){
          	   	// cout<<last<<"-->";
          	  	 count++;
          	  	 last= str[i];
          	  	 // cout<<last<<"--> "<<str[i]<<"\n";
          	  }

          }
          // bool k='0'^'0';
          // bool h= '0'^'1';
          // cout<<k<<" "<<h<<endl; 
          cout<<count<<endl;

    }
	return 0;  
}