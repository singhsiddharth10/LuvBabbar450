#include<bits/stdc++.h>
using namespace std;
void threeWayPartition(int arr[],int n,int a, int b){
    int l = 0;
    int r = n - 1;
    for(int i = 0; i <= r; i++){
        if(arr[i] < a){
            swap(arr[i],arr[l]);
            l++;
        }else if(arr[i] > b){
            swap(arr[i],arr[r]);
            r--;
            i--;
        }
    }
    
    for(int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";
}

int main(){
	long long n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	int a,b;
	cin>>a,b;
	threeWayPartition(arr,n,a,b);
}
