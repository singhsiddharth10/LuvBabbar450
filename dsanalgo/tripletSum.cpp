#include<bits/stdc++.h>
using namespace std;
bool find3Numbers(int A[], int n, int X){
    sort(A,A+n);
    int flag = 0;
    for(int i = 1; i < n - 2; i++){
        int left = i-1;
        int right = n-1;
        while(left < right){
            int sum = A[left] + A[i] + A[right];
            if(sum == X){
                flag = 1;
                break;
            }else if( sum < X){
                left++;
            }else if(sum > X){
                right--;
            }
        }
        
    }
    if(flag == 1){
        return true;
    }
    return false;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	cout<<find3Numbers(arr,n,x);
}
