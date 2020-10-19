#include<bits/stdc++.h>
#include<string>
using namespace std;

int solve(int l,int r){
	if(r%l==(r-l))
		return r;
	return -1;
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
		int l,r;
		scanf("%d%d",&l,&r);
		
		if(l==1)
			cout<<-1;
		else
			cout<<solve(l,r);
		cout<<endl;
	}
}
