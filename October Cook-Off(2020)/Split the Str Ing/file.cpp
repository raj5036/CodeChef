#include<bits/stdc++.h>
#include<string>
using namespace std;

void solve(string s,int n){

	string B="";
	for(int i=n-1;i>=0;i--){
		B+=s[i];
		reverse(B.begin(),B.end());
		if(s.find(B)!=string::npos && s.find(B)!=i){
			cout<<"YES";
			return;	
		}
	}
	cout<<"NO";
}
void fileIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
int32_t main(){
	fileIO();
	
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		string s;
		cin>>s;
		
		solve(s,n);
		cout<<endl;
	}
}
