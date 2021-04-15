#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& nums, int start) {
    int i = start, j = nums.size()-1;
    while (i < j) {
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}
void nextPermutation(vector<int>& nums) {
    vector<int> temp;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        temp.push_back(nums[i]);
    }
    sort(temp.begin(),temp.end(),greater<int>());
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] != temp[i]){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n; i++){
            cout<<nums[i]<<" ";
        }
    }else{
        int count = 0;
        int pos;
        for(int i = n-1; i > 0; i--){
        	if(nums[i] > nums[i-1]){
                pos = i-1;
                break;
            }
        }
        int mn = INT_MAX;
        int pos1;
        for(int i = pos+1; i < n; i++){
            if(nums[pos] < nums[i]){
                if(mn >= nums[i]){
                    mn = nums[i];
                    pos1 = i;
                }
            }
        }
        //cout<<pos<<" "<<pos1;
        swap(nums[pos],nums[pos1]);
        int n1 = n - pos;
        reverse(nums,pos+1);
        for(int i = 0; i < n; i++){
            cout<<nums[i]<<" ";
        }
    }
}
int main(){
	int n;
	cin>>n;
	
	vector<int> nums;
	for(int i = 0; i < n; i++ ){
		int x;
		cin>>x;
		nums.push_back(x);
	}
	nextPermutation(nums);
}

