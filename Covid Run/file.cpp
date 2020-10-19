#include<bits/stdc++.h>
#include<set>
using namespace std;

bool solve(int n,int k,int x,int y,set<int> s){
	int i=x;
	s.insert(i);
	while(true){
		i=(i+k)%n;
		if(i==y)
			return true;
		if(s.find(i)==s.end())
			s.insert(i);
		else
			return false;
	}
	return false;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k,x,y;
		scanf("%d%d%d%d",&n,&k,&x,&y);
		set<int> s;
		if(solve(n,k,x,y,s))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
