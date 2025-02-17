#include<bits/stdc++.h>
using namespace std;
string rev (string & str){
	if (str=="Left") return "Right";
	if (str == "Right") return "Left";
	return "";
}
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
           vector <string>vec;
           for (int i=0; i<=n;i++){
           		string str;
           		getline (cin, str);
           	if (i !=0)	
           		vec.push_back(str);
           }

            string last = "Begin";
           for (int i=n-1; i>=0;i-- ){
                string str = "";
                int j=0;
                while (vec[i][j]!= ' '){
                     str += vec[i][j++];
                }
                if (last != "Begin") last = rev(last);
                vec[i].replace (0,j, last);
                last = str; 
           }
            reverse (vec.begin(), vec.end());
           for (int i=0;i<n;i++){
           	cout<<vec[i]<<endl;
           }
           cout<<endl;
    }
	return 0;  
}