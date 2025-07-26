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
        cin>>str;
        while (str.find('FFT') != std::npos || str.find('NTT') != std::npos){
        	if (str.find('FFT') != std::npos ) str.replace(str.find('FFT')-str.begin(), 'FTF');
        }   
    }
	return 0;  
}