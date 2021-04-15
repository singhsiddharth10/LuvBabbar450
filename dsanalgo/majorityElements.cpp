#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
    map<int,int> mp;
    map<int,int>::iterator itr;
    
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
    }
    int k = nums.size()/2;
    int ans;
    for(itr = mp.begin(); itr != mp.end(); itr++){
        if(itr->second > k){
            ans = itr->first;
            break;
        }
    }
    return ans;
}
int main(){
	int n;
	cin>>n;
	vector<int> arr;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		arr.push_back(x);
	}
	cout<<majorityElement(arr);
}
