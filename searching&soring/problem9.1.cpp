#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    cin>>k;
    int sum,ans=-1;
    for(int i=0;i<n;i++){
     sum=arr[i]+k;
     for(int j=0;j<n;j++){
       if(arr[j]==sum){
         ans=1;
         break;
       }
     }
    }
  cout<<ans;
}