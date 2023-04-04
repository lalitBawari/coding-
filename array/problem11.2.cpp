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
        int y=k-arr[i];
      for(int j=i+1;j<n;j++){
        if(y==arr[j]){
          count++;
        }
      }
      }
      cout<<count;
}