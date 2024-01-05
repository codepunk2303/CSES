#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"
 
ll mod = 1e9+7;
int N = 1e5+10;
 
 
int check(ll mid,ll arr[],int k,int n){
	int count = 0;
	ll sum1 = 0;
	for(int i = 0;i<n;i++){
		sum1+= arr[i];
		if(sum1>mid){
			count++;
			i--;
			sum1 = 0;
		}
 
	}
	count++;
	if(count>k) return false;
	else return true;
}
 
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int t = 1;
	//cin>>t;
	//cin.ignore();
	while(t--){
		int n,k;
		cin>>n>>k;
		ll sum = 0;
		ll arr[n];
		ll maxe = 0;
		for(int i = 0;i<n;i++){
			cin>>arr[i];
			sum+= arr[i];
			maxe = max(maxe,arr[i]);
		}
 
		ll low = maxe, high = sum+1;
		ll ans = 1;
		while(low<high){
			ll mid = low+(high-low)/2;
			if(check(mid,arr,k,n)){
				ans = mid;
				high = mid;
			}
			else low = mid+1;
		}
		cout<<ans<<endl;
 
	}
 
 
}
