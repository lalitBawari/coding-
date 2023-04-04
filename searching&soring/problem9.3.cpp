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
    int ans=-1;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
     int idx=lower_bound(arr+i+1,arr+n,arr[i]+k)-arr;
     if(arr[idx]-arr[i]==k){
        ans=1;
     }
    }
    cout<<ans;
}
