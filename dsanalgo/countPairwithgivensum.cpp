#include<bits/stdc++.h>
using namespace std;

int countnumberofPairs(int arr[], int n, int k){
	map<int,int> mp;
    int count = 0;
	for(int i = 0; i < n; i++){
		int sum = k - arr[i];
		if(mp.count(sum)){
			count += mp[sum];
			mp[arr[i]]++;
		}else{
		    mp[arr[i]]++;
		}
	}
	return count;
}
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i = 0; i < n; i++)cin>>arr[i];

	cout<<countnumberofPairs(arr,n,k);
}


