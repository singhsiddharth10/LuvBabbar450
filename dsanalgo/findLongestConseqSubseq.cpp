#include<bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n){
      set<int> s;
      int count = 0;
      int mx = INT_MIN;
      if(n==1){
          return 1;
      }
      set<int>:: iterator itr;
      for(int i = 0; i < n; i++){
          s.insert(arr[i]);
      }
      int brr[n];
      int k = 0;
      for(itr = s.begin(); itr != s.end(); itr++){
          brr[k++] = *itr;
      }
      
      for(int i = 0; i < k-1; i++){
        if(brr[i+1] - brr[i] == 1)
            count++;
        else
            count = 0;
        mx = max(mx,count);
      }
      return mx+1;
    }
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<findLongestConseqSubseq(arr,n);
}
