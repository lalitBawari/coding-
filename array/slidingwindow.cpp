#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    int sum=0,ans=0;
    int i=0,j=0;
    while(j<n){
     sum+=arr[j];
     if(j-i+1==k){
       ans=max(ans,sum);
       sum-=arr[i];
       i++;
     }
     j++;
    }
    cout<<ans;
}