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
    unordered_map<int ,int >map;   
    for(int i=0;i<n;i++){
     map[arr[i]]++;
    } 
    for(int i=0;i<n;i++){
      int sum=arr[i]+k;
      if(map[sum]){
      ans=1;
      }
    }
    cout<<ans;
}