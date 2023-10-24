#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
	int n,m;
	cin>>n>>m;
	multiset<int,greater<int>>m1;
	int arr[m];
	for(int i = 0;i<n;i++){
		int a;
		cin>>a;
		m1.insert(a);
	}
	for(int i = 0;i<m;i++){
		cin>>arr[i];
	}
	 for(int i = 0;i<m;i++){
	 	auto a = (m1.lower_bound(arr[i]));
	 	if(a!=m1.end()){
	 		cout<<*a<<" ";
	 		m1.erase(a);
	 	}
	 	else cout<<"-1"<<" ";
	 }
	
}