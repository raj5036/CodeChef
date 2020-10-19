#include<bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int n){
	bool prime[n+1];
	memset(prime,true,n+1);
	
	for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) {   
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
}
void fileIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
int main(){
	fileIO();
	
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		
//		for(int i=1;i<=n-1;i++){
//			int src,dest;
//			scanf("%d%d",&src,&dest);
//			
//		}
		sieveOfEratosthenes(n);
	}
	return 0;
}
