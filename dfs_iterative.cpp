#include <bits/stdc++.h>
using namespace std;

// dfs iterative

void dfs(vector<vector<int>>a , int i , vector<int > v){
   // cout<<i<<" ";
    v[i]=1;
    stack <int > s;
    s.push(i);
    int k;
    while(!s.empty()){
        k = s.top();
        cout<<k<<" ";
        s.pop();
        int n = a[k].size();
        for(int jj=n-1;jj>=0;jj--){
            if(v[a[k][jj]]==0){
                v[a[k][jj]]=1;
                s.push(a[k][jj]);
            }
        }
    }
}

int main() {
    int n = 4;
    vector <int> prop;
    vector <vector <int>> adj(4,prop);
    //assume n = 4;
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(3);
    adj[3].push_back(3);
    vector<int> b;
    for(int i=0;i<4;i++){
        b.push_back(0);
    }
    dfs(adj,2,b);
    cout<<endl;
	// your code goes here
	return 0;
}