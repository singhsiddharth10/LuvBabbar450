#include<bits/stdc++.h>
using namespace std;

long long int merge(long long int arr[], long long int temp[],long long int l, long long int mid,long long int e){
    long long int i,j,k;
    long long int count = 0;
    i = l;
    j = mid;
    k = l;
    
    while(i <= mid - 1 && j <= e){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            count += mid - i;
        }
    }
    while(i <= mid - 1)
        temp[k++] = arr[i++];
    while(j <= e)
        temp[k++] = arr[j++];
    
    for(i = l; i <= e; i++)
        arr[i] = temp[i];
    
    return count;
    
}

long long int merge_sort(long long int arr[], long long int temp[], long long int l, long long int e){
    long long int mid, count = 0;
    if(l < e){
        mid = (l+e)/2;
        count += merge_sort(arr,temp,l,mid);
        count += merge_sort(arr,temp,mid+1,e);
        count += merge(arr,temp,l,mid+1,e);
    }
    return count;
}
long long int inversionCount(long long int arr[], long long int n)
{
    long long int temp[n];
    long long int ans = merge_sort(arr,temp,0,n-1);
    return ans;
}
int main(){
	long long int n;
	cin>>n;
	long long int arr[n];
	for(int i = 0; i < n; i++)
		cin>>arr[i];
		
	cout<<inversionCount(arr,n);
}
