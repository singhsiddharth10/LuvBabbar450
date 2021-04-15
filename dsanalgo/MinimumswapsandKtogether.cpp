#include<bits/stdc++.h>
using namespace std;

int minSwap(int *arr, int n, int k) {
    int count = 0;
    int mn = 10000000;
    for(int i = 0; i < n; i++){
        if(arr[i] <= k){
            count++;
        }
    }
    int bad = 0;
    for(int i = 0; i < count; i++){
        if(arr[i] > k)
            bad++;
    }
    int i = 0;
    int j = count - 1;
    while(j < n){
        if(mn > bad){
            mn = bad;
        }
        j++;
        if(j < n && arr[j] > k)
            bad++;
        if(arr[i] > k)
            bad--;
        i++;
        
    }
    if(mn == 10000000)
        return 0;
    return mn;
    
}
int main(){
	long long n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	cout<<minSwap(arr,n,k);
}
