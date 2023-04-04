#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    int temp[n];
    int miss=0,repeat=0;
    for(int i=0;i<n;i++){
       temp[i]=0;
    }
    for(int i=0;i<n;i++){
      if(temp[arr[i]]==0){
        temp[arr[i]]=1;
      }
      if(temp[arr[i]]>=1){
         repeat=arr[i];
      }
    }
    for(int i=0;i<n;i++){
     if(temp[i]==0){
      miss=i;
     }
    }
    cout<<repeat<<endl;
    cout<<miss;
}
