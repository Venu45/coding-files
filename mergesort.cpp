#include <bits/stdc++.h>
using namespace std;
// mergesort

void merge(int a[],int l,int m,int r){
    int n1,n2;
    n1 = m-l+1;
    n2 = r-m;
    int b[n1];
    int c[n2];
    // need to merge b and c and copy to a
    for(int i=0;i<n1;i++){
        b[i]=a[i+l];
    }
    for(int j=0;j<n1;j++){
        c[j]=a[j+m+1];
    }
    int i,j,k;
    i=0;j=0;k=l;
    while(i<n1 && j<n2){
        if(b[i]<=c[j]){
            a[k]=b[i];
            i++;k++;
        }
        else {
            a[k]=c[j];
            j++;k++;
        }
    }
    while(i<n1){
        a[k]=b[i];i++;k++;
    }
    while(j<n2){
        a[k]=c[j];j++;k++;
    }
    
}

void mergesort (int a[],int l,int r){
    if(r>l){
        int mid = (l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
    return;
}

void print(int a[], int n){
    for(int ii=0;ii<n-1;ii++){
        cout<<a[ii]<<" ";
    }   
    cout<<a[n-1]<<endl;
    return;
}

int main() {
    int a[] = {1,3,5,2,6,4};
    int n = 6;
    mergesort(a,0,n-1);
    print(a,n);
	// your code goes here
	return 0;
}

