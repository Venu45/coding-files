#include <bits/stdc++.h>
using namespace std;

void insertionsort (int a[],int n){
    // n is size of array a
    int temp;
    for(int ii=1;ii<n;ii++){
        // we will put a[ii] in its correct position 
        for(int jj=ii;jj>0;jj--){
            if(a[jj]<a[jj-1]){
                // swap
                temp = a[jj];
                a[jj]=a[jj-1];
                a[jj-1]=temp;
            }
            else break;
        }
        // from index 0 to ii array a is relatively sorted
    }
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
    insertionsort(a,n);
    print(a,n);
	// your code goes here
	return 0;
}
