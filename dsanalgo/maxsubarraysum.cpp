#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int sum = 0;
    int mxsum = INT_MIN;
    for(int i = 0; i < n; i++){
        sum+=arr[i];
        if(sum >= 0)
            mxsum = max(sum,mxsum);
        if(sum < 0){
            mxsum = max(mxsum,sum);
            sum = 0;
        }
        cout<<mxsum<<" ";
    }
    return mxsum;
    
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)cin>>arr[i];
	
	cout<<maxSubarraySum(arr,n);
	return 0;
	
}
