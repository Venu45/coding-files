#include <bits/stdc++.h>
using namespace std;

// assume adjaceny matrix a as vector of vector of int



void bfs(vector<vector<int>> a , int i ,  vector<int> v ){
    
    // v maintains visited nodes
    // d maintains nodes for bfs
    
    //cout<<i<<" ";
    v[i]=1;
    queue <int> q;
    q.push(i);
    int s;
    while(!q.empty()){
        s = q.front();
        q.pop();
        cout<<s<<" ";
       // v[s]=1;
        int n = a[s].size();
        for(int jj=0;jj<n;jj++){
            if(v[a[s][jj]]==0){
                v[a[s][jj]]=1;
                q.push(a[s][jj]);
               // v[a[s][jj]]=1;
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
    bfs(adj,2,b);
    cout<<endl;
	// your code goes here
	return 0;
}
