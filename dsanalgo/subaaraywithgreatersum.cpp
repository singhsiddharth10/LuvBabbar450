#include<bits/stdc++.h>
using namespace std;

int subaaraywithgreatersum(int arr[], int n, int x)
{
    // Your code goes here   
    int i = 0;
    int j = 0;
    int sum = 0;
    int pos = INT_MAX;
    while(i <= j && j < n){
        
        while(j < n && sum <= x){
            sum += arr[j];
            j++;
        }
        
        while(i < j && sum > x){
            pos = min(j - i, pos);
            sum -= arr[i];
            i++;
        }
    }
    return pos;
        
}
int main(){
	long long n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	cout<<subaaraywithgreatersum(arr,n,x);
}
    
