#include<bits/stdc++.h>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up,  manzil dur nhi hai
     int t;
     cin>>t;
     while (t--){
     	int n;
     	cin>>n;
     	unordered_map<int,int> vect;
     	vector<int> vec;
     	for (int i = 0; i < n; ++i)
     	{
     		int ele;
     		cin>>ele;
     		vect[ele]=-103;
     		vec.push_back(ele);
     	}
     	//vector<int> vect;
     	for (int i=0;i<vec.size(); i++)
     	{
     		int ele;
     		cin>>ele;

     		if(vect[vec[i]]<ele) vect[vec[i]]= ele;
     		//cout<<vect[vec[i]]<<" "<<vec[i]<<endl;
     	}
     	 int sum=0;
     	 for(auto ele: vect){
     	 	//cout<<ele.second<<" ";
     	 	if(ele.second>0)
     	 	     sum+= ele.second;
     	 }
     	 // if(sum<0) cout<<0<<endl;
     	 // else 
     	  cout<<sum<<endl;
     }
	return 0;
}