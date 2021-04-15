#include<bits/stdc++.h>
using namespace std;

long long maxProduct(int *arr, int n) {
   long long max_overall = arr[0];
   long long  mx =  arr[0];
   long long  mn =  arr[0];
   
   for(int i = 1; i < n; i++){
    	long long temp =  mx;
		mx = max((long long)arr[i] * mx , (long long)arr[i] * mn);
		mx = max(mx,(long long)arr[i]);
		mn = min ((long long)arr[i] * temp , (long long)arr[i] * mn);
		mn = min ((long long) arr[i], mn);
		max_overall = max(mx,max_overall);
       
   }
   return max_overall;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<maxProduct(arr,n);
}
