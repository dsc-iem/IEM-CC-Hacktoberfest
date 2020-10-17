#include <bits/stdc++.h>
using namespace std;

int main() {
	int te;
	cin>>te;
	while(te--) {
	    int n, k, i;
	    cin>>n>>k;
	    vector<int>v(n);
	    for(i=0; i<n; i++) {
	        cin>>v[i];
	    }
	    int s=0, count=1, flag=0;
	    for(i=0; i<n; i++) {
			//Checks if any element in the vector is greater than k. If yes then loop will be terminated
	        if(v[i]>k) {
	            flag=1;
	            break;
	        }
			//counting the current weight the Chef is carrying. If the weight is greater than k then the Chef will drop the item and counter will be incremented by 1.
	        s += v[i];
	        if(s>k) {
	            i--;
	            s=0;
	            count++;
	        }
	    }
	    if(flag) cout<<-1<<endl;
	    else cout<<count<<endl;
	}
	
	return 0;
}