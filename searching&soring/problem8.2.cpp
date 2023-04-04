#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,data;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cin>>data;
    int ans=-1;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
     int idx=lower_bound(arr+i+1,arr+n,arr[i]+data)-arr;
     if((arr[idx]-arr[i])==data){
        ans=1;
     }
    }
    cout<<ans;
}