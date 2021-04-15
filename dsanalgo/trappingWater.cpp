#include<bits/stdc++.h>
using namespace std;
int trappingWater(int arr[], int n){
    int rightMax[n];
    int mx = arr[0];
    int mx1= arr[n-1];
    int leftMax[n];
    
    for(int i = 0; i < n; i++){
        mx = max(arr[i], mx);
        leftMax[i] = mx;
    }
    for(int i = n-1; i >= 0; i--){
        mx1 = max(arr[i], mx1);
        rightMax[i] = mx1;
    }
    
    int w = 0;
    for(int i = 0; i < n; i++){
        w += min(rightMax[i],leftMax[i]) - arr[i];
    }
    
    return w;
}

int main(){
	long long n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<trappingWater(arr,n);
}
