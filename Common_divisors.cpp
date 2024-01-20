#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
 
 
#define ll long long
#define pb push_back
#define endl "\n"
 
 
 
 
//ll mod = 1e9+7;
ll mod = 998244353;


//Use of sieve to check for greatest gcd of 2 elements 
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int t = 1; 
	// cin>>t;
	// cin.ignore();
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);

		int maxe = -1;
		unordered_map<int,int>m;

		for(int i = 0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
			maxe = max(maxe,a[i]);
		}


		int ans = -1;
		for(int i = maxe;i>=1;i--){
			int x = 0;
			for(int j = i;j<=maxe;j+=i){
				x += m[j];
				if(x>=2){
					ans = i;
					break;
				}
			}
			if(ans!=-1) break;
		}


		cout<<ans<<endl;

		
	}
 
 
		
}