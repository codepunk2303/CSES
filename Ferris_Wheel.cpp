#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
	ll n,x;
	cin>>n>>x;
	vector<ll>v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int count = 0;
	auto start = v.begin();
	auto last = v.end()-1;
	while(start<last){
		if(((*start)+(*last))<=x){
			count++;
			*(start) = -1;
			*(last) = -1;
			start++;
			last--;
		}
		else last--;
	}
	for(int i = 0;i<n;i++){
		if(v[i]!=-1) count++;
	}
	cout<<count<<endl;
	
}