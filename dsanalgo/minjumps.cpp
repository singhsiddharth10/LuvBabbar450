#include<bits/stdc++.h>
using namespace std;
    
int minJumps(int arr[], int n){
    
    if (n <= 1)
		return 0;
	if (arr[0] == 0)
		return -1;
 	int curr = 0;
    int pos;
    int count = 1;
    int reach = arr[0];
    int mx = arr[0];
    for(int i = 1; i < n; i++){
        if(i == n-1)
            return count;
        mx = max(mx, arr[i] + i);
        
		reach--;
        if(reach == 0){
        	if (i >= mx)
		    	return -1;
            count++;
            reach = mx - i;
        }
    }
    return count;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)cin>>arr[i];
	
	cout<<minJumps(arr,n);
	return 0;
	
}
//6
//1 4 3 2 6 7
//11 
//1 3 5 8 9 2 6 7 6 8 9
