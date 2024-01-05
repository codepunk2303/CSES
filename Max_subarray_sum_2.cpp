#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"
 
 
 
ll mod = 1e9+7;
//ll mod = 998244353;
int N = 1e5+10;
 
 
// use of prefix sums to calculate subarray sum of length [a,b]
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int t = 1;
	// cin>>t;
	// cin.ignore();
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		vector<ll>arr(n);
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		
		vector<ll>prefix(n,0);
		prefix[0] = arr[0];
		for(int i = 1;i<n;i++){
			prefix[i] = prefix[i-1]+arr[i];
		}
 
		ll max_sum = prefix[a-1];
		ll sum = 0;
		multiset<ll>s;
		s.insert(0);
		for(int i = a;i<n;i++){
			s.insert(prefix[i-a]);
			if(i<b){
				auto it = s.begin();
				sum = prefix[i]-(*it);
			}
			else{
				if(i==b) s.erase(s.find(0));
				if(i>b) s.erase(s.find(prefix[i-b-1]));
				auto it = s.begin();
				sum = prefix[i]-(*it);
			}
 
			max_sum = max(max_sum,sum);
		}
 
		cout<<max_sum<<endl;
 
		
 
 
 
 
 
		
 
	}
}
