#include <bits/stdc++.h>
using namespace std;

// assume adjaceny matrix a as vector of vector of int



void bfs(vector<vector<int>> a , int i ,  vector<int> v ){
    vector<int>d;
    v[i]=1;
    int n = a[i].size();
    for(int j=0;j<n;j++){
        if(v[a[i][j]]==0){
            cout<<a[i][j]<<" ";
            v[a[i][j]]=1;
            d.push_back(a[i][j]);
        }
    }
    for(int p =0;p<d.size();p++){
        bfs(a,d[p],v);
    }
    
}

void bfss(vector<vector<int>> a , int i ,  vector<int> v){
    cout<<i<<" ";
    bfs(a,i,v);
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
    bfss(adj,2,b);
    cout<<endl;
	// your code goes here
	return 0;
}
