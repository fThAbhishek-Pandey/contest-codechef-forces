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
     	//cout<<"ram"<<endl;
     	int n;
     	cin>>n;
     	vector<int> nums;
     	for (int i = 0; i < n; ++i)
     	{
     		int ele;
     		cin>>ele;
     	     nums.push_back(ele);
     	     //cout<<nums.back()<<endl;
     	}
     	auto it = min_element(nums.begin(),nums.end());
     	int k = distance(nums.begin(),it);
     	nums[k]++;
     	int mul=1;
     	for(int i=0;i<nums.size();i++){
     		mul *= nums[i];
     	}
     	cout<<mul<<endl;
     }
	return 0;
}