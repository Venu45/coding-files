#include <bits/stdc++.h>
using namespace std;

void topologicalsort(vector<vector<int>> a ,int i , vector<int> &v , stack<int> & s){
    v[i]=1;
    int n = a[i].size();
    for(int j=0;j<n;j++){
        if(v[a[i][j]]==0){
            topologicalsort(a,a[i][j],v,s);
        }
    }
    s.push(i);
}

void topsort(vector<vector<int>> a , vector<int > v ){
    stack<int> s;
    // s maintains topological sort ;
    for(int i=0;i<a.size();i++){
        if(v[i]==0)topologicalsort(a,i,v,s);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //code
    vector <int> prop;
    vector <vector <int>> adj(6,prop);
    adj[5].push_back(2);
    adj[5].push_back(0);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);
    vector<int>v;
    for(int i=0;i<6;i++){
        v.push_back(0);
    }
  /*  for(int i=0;i<6;i++){
        for(int j=0;j<adj[i].size();j++){
            v[adj[i][j]]++;
        }
    } */
    topsort(adj,v);
	// your code goes here
	return 0;
}
