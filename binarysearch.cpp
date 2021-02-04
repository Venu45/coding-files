#include <bits/stdc++.h>
using namespace std;

void bin(vector<int> &a,int x,int l,int r){
    if(l>r){
        cout<<"NO"<<endl;
        return;
    }
    int m = (l+r)/2;
    if(a[m]==x){
        cout<<"YES"<<endl;
        return;
    }
    else if(a[m]<x){
        bin(a,x,m+1,r);
        return;
    }
    bin(a,x,l,m-1);
    return;
}

int main() {
    int n,k;
    cin>>n>>k;
    int temp;
    int x;
    vector<int> a ;
    for(int ii=0;ii<n;ii++){
        cin>>temp;
        a.push_back(temp);
    }
    for(int ii=0;ii<k;ii++){
        cin>>x;
        bin(a,x,0,n-1);
    }
	// your code goes here
	return 0;
}
