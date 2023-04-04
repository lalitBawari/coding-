#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
         sum=arr[i]+arr[j];
         if(sum==k){
          count++;
         }
        }
    } 
    cout<<count;
    }