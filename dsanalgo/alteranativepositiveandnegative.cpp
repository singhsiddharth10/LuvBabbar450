#include<bits/stdc++.h>
using namespace std;

void modify(int arr[], int n){
	for(int i = 0; i < n; i++){
		if(i % 2 == 0 && arr[i] < 0)        //1 2 3 -4 -1 4
			continue;
		else if(i % 2 == 0 && arr[i] > 0){
		
			int pos = -1;
			for(int j = i + 1; j < n; j++){
				if(arr[j] < 0){
					pos = j;
					break;
				}
			}
			//cout<<pos<<endl;
			if(pos == -1)
				continue;
			else{
				int temp = arr[pos];
				for(int k = pos - 1; k >= i; k--){
					arr[k+1] = arr[k];
					//cout<<arr[k+1]<<" "<<arr[k]<<endl;;
				}
				arr[i] = temp;
			}
		}
		if(i % 2 != 0 && arr[i]  > 0)
			continue;
		else if(i % 2 != 0 && arr[i]  < 0){
			int pos = -1;
			for(int j = i + 1; j < n; j++){
				if(arr[j] > 0){
					pos = j;
					break;
				}
			}
			if(pos == -1)
				continue;
			else{
		
				int temp = arr[pos];
				for(int k = pos-1; k >= i; k--){
					arr[k+1] = arr[k];
				}
				arr[i] = temp;
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)cin>>arr[i];
	modify(arr,n);
	for(int i = 0; i < n; i++)cout<<arr[i]<<" ";
	
	return 0;
	
}

