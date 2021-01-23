#include <bits/stdc++.h>
using namespace std;

void bubblesort (int a[], int n){
    int swap = 0;
    int temp;
    for(int ii=0;ii<n-1;ii++){
        swap=0;
        for(int jj=0;jj<n-ii-1;jj++){
            if(a[jj]>a[jj+1]){
                swap=1;
                temp = a[jj];
                a[jj]=a[jj+1];
                a[jj+1]=temp;
            }
        }
        if(swap=0)return;
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

// code for bubble sort
int main() {
    // assume array a has to be sorted out
    int a[] = {1,3,5,2,6,4};
    int n = 6;
    bubblesort(a,n);
    print(a,n);
    
	// your code goes here
	return 0;
}
