#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
    set<int> common_elements;
    for(int i = 0; i < n; i++)
        common_elements.insert(a[i]);
    for(int i = 0; i < m; i++)
        common_elements.insert(b[i]);
        
    return common_elements.size();
}

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n];
	int brr[m];
	for(int i = 0; i < n; ++i)cin>>arr[i];
	for(int i = 0; i < m; ++i)cin>>brr[i];
	cout<<doUnion(arr,n,brr,m);
	
}
