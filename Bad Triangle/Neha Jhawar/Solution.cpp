/**
Since the array elements are already sorted in ascending order, so sum of 1st 2 elements has to be greater than last element for valid solutions.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int te;
	cin>>te;
	while(te--) {
	    int n, i;
	    cin>>n;
	    vector<long> v(n);
	    for(i=0; i<n; i++) {
	        cin>>v[i];
	    }
	    if(v[0] + v[1] > v[n-1]) cout<<-1<<endl;
	    else cout<<1<<" "<<2<<" "<<n<<endl;
	}
	
	return 0;
}