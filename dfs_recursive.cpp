#include <bits/stdc++.h>
using namespace std;

void dfs (vector<vector<int >>a , int i , vector<int>v){
    if(v[i]==1)return;
    cout<<i<<" ";
    v[i]=1;
    int n = a[i].size();
    for(int ii=0;ii<n;ii++){
        dfs(a,a[i][ii],v);
    }
    return;
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

