/**
If all the numbers in the array are equal then the length of shortest password is length of array else answer is always 1.
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int te;
	cin>>te;
	while(te--) {
	    int n, c=0, i;
	    cin>>n;
	    vector<int> v(n);
	    for(i=0; i<n; i++) {
	        cin>>v[i];
	    }
	    for(i=1; i<n; i++) {
	        if(v[i]==v[0]) c++;
	    }
	    if(c==n-1) cout<<n<<endl;
	    else cout<<1<<endl;
	}
	return 0;
}