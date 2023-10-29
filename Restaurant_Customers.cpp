#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
 
 
int main(){
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	while(n--){
		int a,b;
		cin>>a>>b;
		v.push_back({a,1});
		v.push_back({b,-1});
	}
	sort(v.begin(),v.end());
	
	int prefix[v.size()];
	prefix[0] = v[0].second;
	int maxi = prefix[0];
	for(int i = 1;i<v.size();i++){
		prefix[i] = prefix[i-1]+v[i].second;
		maxi = max(maxi,prefix[i]);
	}
	cout<<maxi<<endl;
}
