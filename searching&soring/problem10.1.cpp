#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;j<n-1;j++){
                for(int l=k+1;k<n;k++){
                  int sum=arr[i]+arr[j]+arr[k]+arr[l];
                  if(sum==p){
                    cout<<"["<<arr[i]<< " "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<"]";
                    continue;
                  }
                }
            }
        }
    }
}