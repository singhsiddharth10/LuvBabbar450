#include<bits/stdc++.h>
using namespace std;

//Dutch National Flag Algorithm OR 3-way Partitioning:

void sortTheArray(int arr[], int n){
	int low = 0;
	int mid = 0;
	int high = n-1;
	while (mid <= high){
		switch(arr[mid]){
			case 0:
				swap(arr[low++],arr[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(arr[high--],arr[mid]);
				break;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i)cin>>arr[i];
	sortTheArray(arr,n);
	for(int i = 0; i < n; ++i)
		cout<<arr[i]<<" ";
	return 0;
}
