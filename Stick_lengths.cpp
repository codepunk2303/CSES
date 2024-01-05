#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"
 
 
 
ll mod = 1e9+7;
//ll mod = 998244353;
int N = 1e5+10;
 
 
 
 
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int t = 1;
	// cin>>t;
	// cin.ignore();
	while(t--){
		int n;
		cin>>n;
		vector<ll>a(n);
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
 
		sort(a.begin(),a.end());
 
		ll x = a[n/2];
 
		ll sum = 0;
		for(int i = 0;i<n;i++){
			sum += abs(x-a[i]);
		}
 
		cout<<sum<<endl;
 
 
		
 
	}
}
