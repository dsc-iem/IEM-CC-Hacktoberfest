/**
First take one stone from the second heap and two stones from the third heap. Then take take one stone from the first heap and two stones from the second heap. Keep track of total count of stones and print it. 
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int te;
	cin>>te;
	while(te--) {
	    int a, b, c, i;
	    cin>>a>>b>>c;
	    int count=0;
	    while(c>=2 && b>0) {
	        count+=3;
	        c -= 2;
	        b--;
	    }
	    while(b>=2 && a>0) {
	        count+=3;
	        b -= 2;
	        a--;
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}