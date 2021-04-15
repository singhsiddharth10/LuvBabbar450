#include<bits/stdc++.h>
using namespace std;

//Best Time to Buy and Sell Stock

int maxProfit(int prices[], int n) {
    int mn = INT_MAX;
    int mx = 0;
    for(int i = 0; i < n; i++){
        if(mn > prices[i]){
            mn = prices[i];
        }else{
            int diff = prices[i] - mn;
            mx = max(mx,diff); 
        }
            
    }
    return mx;
}

int main(){
	long long int n;
	cin>>n;
	long long int arr[n];
	for(int i = 0; i < n; i++)
		cin>>arr[i];
		
	cout<<maxProfit(arr,n);
}
