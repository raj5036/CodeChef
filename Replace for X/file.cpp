#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t-->0)
    {
        ll n,x,p,k;
        cin>>n>>x>>p>>k;
        p--;k--;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[p]==x){
            cout<<0<<endl;
        }
        else if(k>=p && arr[p]>=x){
            int q=0;
            for(int i=p;i>=0;i--)  if(arr[i]>x) q++;
            cout<<q<<endl;
        }
        else if(k<=p && arr[p]<=x){
            int q=0;
            for(int i=p;i<n;i++)  if(arr[i]<x)q++;
            cout<<q<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
	return 0;
}
