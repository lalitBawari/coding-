#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum;
    for(int i=0;i<n-3;i++){
      for(int j=i+1;j<n-2;j++){
         for(int k=j+1;k<n-1;k++){
          for(int l=k+1;l<n;l++){
             sum=arr[i]+arr[j]+arr[k]+arr[l];
             if(sum==p){
              cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<arr[l]<<"\n";
             }
          }
         }
}
}
}