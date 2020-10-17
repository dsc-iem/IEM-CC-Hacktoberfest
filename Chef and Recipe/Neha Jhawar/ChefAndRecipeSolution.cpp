/**
In this problem we have to keep track of 2 things for a possible solution
1. Check if no a particular set of number(ingredients) is appearing together
2. The count of numbers in each set must be unique

So to do that I am using three maps in my solution.
First map 'mp' keeps track of last position of occurence of the number in the vector v
Second map 'count' stores the count of each numbers in the vector vector
Third map 'counter' checks whether a particular element is not repeated in map 'count'

#Please note instead of array A, I am using vector v. 
*/



#include <bits/stdc++.h>
using namespace std;

int main() {
	int te;
	cin>>te;
	while(te--) {
	    int n, i;
	    cin>>n;
	    vector<int>v(n);
	    for(i=0; i<n; i++) {
	        cin>>v[i];
	    }
	    map<int, int> mp, count;
	    int flag = 0;
	    for(i=0; i<n; i++) {
	        count[v[i]]++;
			//checks if a particular element is present in map 'mp'
	        if(mp.find(v[i])!=mp.end()) {
				//if the element is present then the difference of value of map corresponding to key and the current element position(i) should be 1
	            if(i-mp[v[i]]!=1) {
	                flag=1;
	                break;
	            }
	            mp[v[i]] = i;
	        }
	        else {
	            mp[v[i]]=i;
	        }
	        
	    }
	    if(flag) cout<<"NO"<<endl;
	    else {
	        flag = 0;
	        map<int, int> counter;
	        map<int, int>::iterator itr;
	        for(itr=count.begin(); itr!=count.end(); itr++) {
	            if(counter.find(itr->second) != counter.end()) {
    	            flag=1;
    	            break;
    	        }
    	        else {
    	            counter[itr->second]=1;
    	        }
	        }
	        if(flag) cout<<"NO"<<endl;
	        else cout<<"YES"<<endl;
	    }
	}
	
	return 0;
}