#include<bits/stdc++.h>
using namespace std;
long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    int mn = INT_MAX;
    for(int i = 0; i < n - m + 1; i++){
        int d = a[i + m - 1] - a[i];
        mn = min(d,mn);
    }
    return mn;
    
}
int main(){
	long long n;
	cin>>n;
	vector<long long> arr;
	for(int i = 0; i < n; i++){
		long long x;
		cin>>x;
		arr.push_back(x);
	}
	long long m;
	cin>>m;
	cout<<findMinDiff(arr,n,m);
}
