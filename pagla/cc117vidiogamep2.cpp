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
     	int h,x,y1,y2,k;
     	cin>>h>>x>>y1>>y2>>k;
     	int t1 = 0;//h/x;
     	if (h%x==0) t1= h/x;
     	else t1 = h/x +1;

     	int t2 = 0;
     	if (h%y1==0 ) t2 = h/y1;
     	else  t2 = h/y1 +1;
     	if (t2 >k) {
     		h-= k*y1;
     		if (h%y1==0) t2 = k+ h/y2;
     		else t2 = k + h/y2 +1; 
     	}
     	  cout<< min (t1, t2)<<endl;
     }
	return 0;
}