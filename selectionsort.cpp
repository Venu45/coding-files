#include <bits/stdc++.h>
using namespace std;

void selectionsort (int a[], int n){
    int min,temp,k;
    for(int i=0;i<n;i++){
        // find ith min and put it in its correct position 
        min = a[i];
        k=i;
        for(int j=i;j<n;j++){
            if(a[j]<min){
                min=a[j];
                k=j;
            }
        }
        // a[k] is ith min should be in a[i]
        temp = a[k];
        a[k]=a[i];
        a[i]=temp;
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
    selectionsort(a,n);
    print(a,n);
	// your code goes here
	return 0;
}

