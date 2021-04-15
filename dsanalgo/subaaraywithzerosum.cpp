#include<bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n){
    set<int> s;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(s.count(sum) || arr[i] == 0 || sum == 0)
            return true;
        else{
            s.insert(sum);
        }
    }
    return false;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)cin>>arr[i];
	cout<<subArrayExists(arr,n);
	return 0;
}
