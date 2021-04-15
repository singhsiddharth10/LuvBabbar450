#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int nums[], int n) {
        map<int,int> mp;
        map<int,int>:: iterator itr;
        for(int i = 0; i < n; i++)
            mp[nums[i]]++;
        int ans;
        for(itr = mp.begin(); itr != mp.end(); itr++){
            if(itr->second != 1){
                ans = itr->first;
                break;
            }
                
        }
        return ans;
    }
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)cin>>arr[i];
	
	cout<<findDuplicate(arr,n);
	return 0;
	
}
