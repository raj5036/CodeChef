#include<bits/stdc++.h>
#include<vector>
using namespace std;

void solve(int *a,int n){
	int P=0,sum=0;
	for(int i=0;i<n;i++)
		if(a[i]>0){
			P++;
			sum+=a[i];	
		}
	vector<int> indexes;
	for(int i=0;i<P;i++){
		if(a[i]<0)
			indexes.push_back(i);
	}
	for(int i=P;i<n;i++)
		if(a[i]>0)
			indexes.push_back(i);
	
	
	cout<<sum<<endl;
	for(int i:indexes)
		cout<<i<<endl;
}	
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		memset(a,0,sizeof(a));
		bool positiveValueExists=false;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			if(num>0)
				positiveValueExists=true;
			a[i]=num;
		}
		if(!positiveValueExists)
			cout<<0<<endl<<0<<endl;
		else{
			solve(a,n);
		}
	}
	return 0;
}
