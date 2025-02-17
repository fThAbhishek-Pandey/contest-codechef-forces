#include<bits/stdc++.h>
using namespace std;
void f(vector<int> & day,int delay, int forget){
       for(int i=0;i<day.size();i++){
           if(day[i]!=-1){
               day[i]++;
               if(day[i]<forget){
                    if(day[i]>=delay) day.push_back(0); 
               }
               else day[i]=-1;
           }
       }
}
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<int> day;
        day.push_back(0);
        for(int i=1;i<n;i++){
            f(day,delay,forget);
        }
        int count =0;
        for(int i=0;i<day.size();i++){
            if (day[i]!= -1) count++;
        }
        return count;
    }
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up,  manzil dur nhi hai
     int t;
     cin>>t;
     while (t--){
     	int n,d,f;
     	cin>>n>>d>>f;
     	cout<<peopleAwareOfSecret(n,d,f)<<endl;
     }
	return 0;
}