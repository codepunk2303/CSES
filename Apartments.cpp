#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int arr[n];
	int arr1[m];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	for(int i = 0;i<m;i++){
		cin>>arr1[i];
	}
	sort(arr,arr+n);
	sort(arr1,arr1+m);
	int i = 0, j = 0;
	int count = 0;
	while(i<n && j<m){
		if(abs(arr[i]-arr1[j])<=k){   
			count++;
			i++;
			j++;
		}
		else if(arr[i]>arr1[j]){         //Above condition already analyses diff(arr[i],arr1[j])<=k
			j++;
		}
		else i++;
	}
	cout<<count<<endl;
}