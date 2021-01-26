#include <bits/stdc++.h>
using namespace std;

void topsort(vector<vector<int>> a , vector<int > v ){
    // v[i] denotes no of incoming edges for node i
    int n = a.size();
    int visited[n]={0};
    for(int jj=0;jj<n;jj++){
        visited[jj]=0;
    }
    int finished =0;
    int k;
    while(finished != n){
        for(int jj=0;jj<n;jj++){
            if(v[jj]==0 && visited[jj]==0){k=jj;break;}
        }
        cout<<k<<" ";
        visited[k]=1;
        finished++;
        for(int jj=0;jj<a[k].size();jj++){
            v[a[k][jj]]--;
        }
        
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
    for(int i=0;i<6;i++){
        for(int j=0;j<adj[i].size();j++){
            v[adj[i][j]]++;
        }
    }
    topsort(adj,v);
	// your code goes here
	return 0;
}
