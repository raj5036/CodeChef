#include<bits/stdc++.h>
using namespace std;

int getMatches(int n){
	if(n==0)
		return 6;
	if(n==1)
		return 2;
	if(n==2)
		return 5;
	if(n==3)
		return 5;
	if(n==4)
		return 4;
	if(n==5)
		return 5;
	if(n==6)
		return 6;
	if(n==7)
		return 3;
	if(n==8)
		return 7;
	return 6;
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
		int a,b;
		scanf("%d%d",&a,&b);
		int res=a+b;
		int count=0;
		do{
			int digit=res%10;
			count+=getMatches(digit);
			res/=10;
		}while(res!=0);
		
		cout<<count<<endl;
	}
	return 0;
}
