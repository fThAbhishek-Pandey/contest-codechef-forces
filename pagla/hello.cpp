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
     	//cout<<"hello, co"<<endl;
     		int count=0;
     	for (int i = 0,p=0; i < 10; ++i)
     	{
     		for (int j = 0,q=0; j< 10; ++j)
     		{
     			char ele;
     			cin>>ele;
     			if(ele=='X'){
     				//cout<<count<<" ";
     				if(i<5&&j<5){
     					count += min(i,j) + 1;
     					//cout<< min(i,j) + 1<<" ";
     				}
     				else if( i>=5&&j>=5){
     					count += min(i-p,j-q); 
     					//cout<<min(i-p,j-q)<<" ";
     					//q+=2;

     				}
     				
     				else if(j>=5&&i<5){
     					count += min(i,j-q-1)+1;
     					//cout<< min(i,j-q-1)+1<<" ";
     					//q+=2;
     				}
     				else if(i>=5&&j<5){
     					count+= min(i-p-1,j)+1;
     					//cout<<min(i-p-1,j)+1 <<" ";
     				}
     			}
     			//else cout<<". ";
     			if (j>=5) q+=2;
     		}
     		if(i>=5) p+=2;
     		//cout<<endl;
     	}
     	cout<<count<<endl;
     }
	return 0;
}