#include <bits/stdc++.h>

using namespace std;
vector<int> dynamicArray(int n, vector<vector<int>> q) {
    vector<vector<int>> v(n);
    vector<int>ar;
    int i, la=0, sum;
    for(i=0; i<q.size(); i++) {
        int bla=la, a, b;
        if(q[i][0]==1) {
            a = (q[i][1]^la)%n;
            v[a].push_back(q[i][2]);
        }
        else {
            a = (q[i][1]^la)%n;
            b = q[i][2]%v[a].size();
            la = v[a][b];
            ar.push_back(la);
        }
    }
    return ar;
}

int main()
{
    int n, q;
    cin>>n>>q;

    vector<vector<int>> queries(q, vector<int>(3));

    for (int i = 0; i < q; i++) {
        for (int j = 0; j < 3; j++) {
            cin>>queries[i][j];
        }
    }

    vector<int> result = dynamicArray(n, queries);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i]<<endl;   
    }
    return 0;
}
